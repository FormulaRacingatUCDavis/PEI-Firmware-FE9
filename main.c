/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F26K83
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    
    uCAN_MSG CanCurrentData; 
    CanCurrentData.frame.idType = 0x00;
    CanCurrentData.frame.id = 0x387; // need to decide on a CAN message ID
    CanCurrentData.frame.dlc = 0x02;
    
    uCAN_MSG CanReadyToDrive; 
    CanReadyToDrive.frame.idType = 0x00;
    CanReadyToDrive.frame.id = 0x0D1; // need to decide on a CAN message ID
    CanReadyToDrive.frame.dlc = 0x01;
    CanReadyToDrive.frame.data0 = 1; // Arbitrary data signaling ReadyToDrive to VCU
    bool ReadyToDriveSent = false;
    
    while (1)
    {
        // get current sensor data (RA6/RC0 ???)
        // send data via PCAN to BMS main
        uint16_t current = ADCC_GetSingleConversion(channel_ANC0);
        CanCurrentData.frame.data0 = current >> 8; // upper bits
        CanCurrentData.frame.data1 = current & 0xFF;
        CAN_transmit(&CanCurrentData);
        
        // Only send CAN message once
        // if not sent, check if ready to send
        if(!ReadyToDriveSent)
        {
            // When ReadyToDrive pin is HIGH
            // send ready to drive code to VCU via CAN
            uint8_t ReadyToDrive = IO_RC3_GetValue();
            if(ReadyToDrive)
            {
                CAN_transmit(&CanReadyToDrive);
                ReadyToDriveSent = true;
            }
        }
        
        
        __delay_ms(500);
    }
}
/**
 End of File
*/