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
    
    uCAN_MSG CanCurrentData; 
    CanCurrentData.frame.idType = dSTANDARD_CAN_MSG_ID_2_0B;
    CanCurrentData.frame.id = PEI_CURRENT;
    CanCurrentData.frame.dlc = 0x02;
    
    while (1)
    {
        // get current sensor data (RA6/RC0 ???)
        // TODO: acquiring this conversion will need to change for current sensor; need 2 ADC channels
        uint16_t current = ADCC_GetSingleConversion(channel_ANC0);
        
        // send data via PCAN to BMS main
        CanCurrentData.frame.data0 = current >> 8; // upper bits
        CanCurrentData.frame.data1 = current & 0xFF;
        CAN_transmit(&CanCurrentData);
        
        __delay_ms(500);
    }
}
/**
 End of File
*/