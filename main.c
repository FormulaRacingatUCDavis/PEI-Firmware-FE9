/**
 * FE9 PEI Board Firmware
 */

#include "mcc_generated_files/mcc.h"

typedef enum {
    VEHICLE_STATE = 0x0c0,
    SWITCHES = 0x0d0,
    TORQUE_REQUEST_COMMAND = 0x766,
    BMS_STATUS = 0x380,
    PEI_CURRENT = 0x387,
    BMS_VOLTAGES = 0x388,
    BMS_TEMPERATURES = 0x389
} CAN_ID;

/*
                         Main application
 */
void main(void)
{
    
    SYSTEM_Initialize(); //this got deleted somehow, its very important
    
    uCAN_MSG can_current_data; 
    can_current_data.frame.idType = dSTANDARD_CAN_MSG_ID_2_0B;
    can_current_data.frame.id = PEI_CURRENT;
    can_current_data.frame.dlc = 0x03;
    
    while (1)
    {
        // get current sensor data (RA6/RC0 ???)
        // TODO: acquiring this conversion will need to change for current sensor; need 2 ADC channels
        uint16_t current_analog_1 = ADCC_GetSingleConversion(CURRENT_ANALOG_1);
        uint16_t current_analog_2 = ADCC_GetSingleConversion(CURRENT_ANALOG_2); // found to be positive in testing
        
        // current = value of whichever channel is active (current -> 0 if inactive)
        uint16_t current = current_analog_2 - current_analog_1; 
        
        // shutdown flags
        uint8_t shutdown_flags = 0;
        
        if (IMD_OK_5V_GetValue()) { shutdown_flags |= (1 << 5); }
        else { shutdown_flags &= (0b011111); }
        
        if (BMS_OK_GetValue()) { shutdown_flags |= (1 << 4); }
        else { shutdown_flags &= (0b101111); }
        
        if (SD_HVMS_FINAL_5V_GetValue()) { shutdown_flags |= (1 << 3); }
        else { shutdown_flags &= (0b110111); }
        
        if (AIR1_5V_GetValue()) { shutdown_flags |= (1 << 2); }
        else { shutdown_flags &= (0b111011); }
        
        if (AIR2_5V_GetValue()) { shutdown_flags |= (1 << 1); }
        else { shutdown_flags &= (0b111101); }
        
        if (PRECHARGE_5V_GetValue()) { shutdown_flags |= (1 << 0); }
        else { shutdown_flags &= (0b111110); }

        // send data via PCAN to BMS main
        // note: uses 2's complement
        can_current_data.frame.data0 = current >> 8; // upper bits
        can_current_data.frame.data1 = current & 0xFF; // lower bits
        can_current_data.frame.data2 = shutdown_flags;
        CAN_transmit(&can_current_data);
        
        
        __delay_ms(500);
    }
}
/**
 End of File
*/
