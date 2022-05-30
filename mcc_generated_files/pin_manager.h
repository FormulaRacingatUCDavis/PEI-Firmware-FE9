/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F26K83
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IMD_OK_5V aliases
#define IMD_OK_5V_TRIS                 TRISAbits.TRISA0
#define IMD_OK_5V_LAT                  LATAbits.LATA0
#define IMD_OK_5V_PORT                 PORTAbits.RA0
#define IMD_OK_5V_WPU                  WPUAbits.WPUA0
#define IMD_OK_5V_OD                   ODCONAbits.ODCA0
#define IMD_OK_5V_ANS                  ANSELAbits.ANSELA0
#define IMD_OK_5V_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define IMD_OK_5V_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define IMD_OK_5V_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define IMD_OK_5V_GetValue()           PORTAbits.RA0
#define IMD_OK_5V_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define IMD_OK_5V_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define IMD_OK_5V_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define IMD_OK_5V_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define IMD_OK_5V_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define IMD_OK_5V_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define IMD_OK_5V_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define IMD_OK_5V_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set BMS_OK aliases
#define BMS_OK_TRIS                 TRISAbits.TRISA1
#define BMS_OK_LAT                  LATAbits.LATA1
#define BMS_OK_PORT                 PORTAbits.RA1
#define BMS_OK_WPU                  WPUAbits.WPUA1
#define BMS_OK_OD                   ODCONAbits.ODCA1
#define BMS_OK_ANS                  ANSELAbits.ANSELA1
#define BMS_OK_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define BMS_OK_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define BMS_OK_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define BMS_OK_GetValue()           PORTAbits.RA1
#define BMS_OK_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define BMS_OK_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define BMS_OK_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define BMS_OK_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define BMS_OK_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define BMS_OK_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define BMS_OK_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define BMS_OK_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set SD_MSD_SRLK_5V aliases
#define SD_MSD_SRLK_5V_TRIS                 TRISAbits.TRISA2
#define SD_MSD_SRLK_5V_LAT                  LATAbits.LATA2
#define SD_MSD_SRLK_5V_PORT                 PORTAbits.RA2
#define SD_MSD_SRLK_5V_WPU                  WPUAbits.WPUA2
#define SD_MSD_SRLK_5V_OD                   ODCONAbits.ODCA2
#define SD_MSD_SRLK_5V_ANS                  ANSELAbits.ANSELA2
#define SD_MSD_SRLK_5V_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define SD_MSD_SRLK_5V_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define SD_MSD_SRLK_5V_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define SD_MSD_SRLK_5V_GetValue()           PORTAbits.RA2
#define SD_MSD_SRLK_5V_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define SD_MSD_SRLK_5V_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define SD_MSD_SRLK_5V_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define SD_MSD_SRLK_5V_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define SD_MSD_SRLK_5V_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define SD_MSD_SRLK_5V_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define SD_MSD_SRLK_5V_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define SD_MSD_SRLK_5V_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set SD_SRLK_BMS_5V aliases
#define SD_SRLK_BMS_5V_TRIS                 TRISAbits.TRISA3
#define SD_SRLK_BMS_5V_LAT                  LATAbits.LATA3
#define SD_SRLK_BMS_5V_PORT                 PORTAbits.RA3
#define SD_SRLK_BMS_5V_WPU                  WPUAbits.WPUA3
#define SD_SRLK_BMS_5V_OD                   ODCONAbits.ODCA3
#define SD_SRLK_BMS_5V_ANS                  ANSELAbits.ANSELA3
#define SD_SRLK_BMS_5V_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define SD_SRLK_BMS_5V_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define SD_SRLK_BMS_5V_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define SD_SRLK_BMS_5V_GetValue()           PORTAbits.RA3
#define SD_SRLK_BMS_5V_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define SD_SRLK_BMS_5V_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define SD_SRLK_BMS_5V_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define SD_SRLK_BMS_5V_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define SD_SRLK_BMS_5V_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define SD_SRLK_BMS_5V_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define SD_SRLK_BMS_5V_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define SD_SRLK_BMS_5V_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set SD_IMD_HVMS_5V aliases
#define SD_IMD_HVMS_5V_TRIS                 TRISAbits.TRISA4
#define SD_IMD_HVMS_5V_LAT                  LATAbits.LATA4
#define SD_IMD_HVMS_5V_PORT                 PORTAbits.RA4
#define SD_IMD_HVMS_5V_WPU                  WPUAbits.WPUA4
#define SD_IMD_HVMS_5V_OD                   ODCONAbits.ODCA4
#define SD_IMD_HVMS_5V_ANS                  ANSELAbits.ANSELA4
#define SD_IMD_HVMS_5V_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define SD_IMD_HVMS_5V_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define SD_IMD_HVMS_5V_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define SD_IMD_HVMS_5V_GetValue()           PORTAbits.RA4
#define SD_IMD_HVMS_5V_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define SD_IMD_HVMS_5V_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define SD_IMD_HVMS_5V_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define SD_IMD_HVMS_5V_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define SD_IMD_HVMS_5V_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define SD_IMD_HVMS_5V_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define SD_IMD_HVMS_5V_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define SD_IMD_HVMS_5V_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set SD_HVMS_FINAL_5V aliases
#define SD_HVMS_FINAL_5V_TRIS                 TRISAbits.TRISA5
#define SD_HVMS_FINAL_5V_LAT                  LATAbits.LATA5
#define SD_HVMS_FINAL_5V_PORT                 PORTAbits.RA5
#define SD_HVMS_FINAL_5V_WPU                  WPUAbits.WPUA5
#define SD_HVMS_FINAL_5V_OD                   ODCONAbits.ODCA5
#define SD_HVMS_FINAL_5V_ANS                  ANSELAbits.ANSELA5
#define SD_HVMS_FINAL_5V_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SD_HVMS_FINAL_5V_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SD_HVMS_FINAL_5V_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SD_HVMS_FINAL_5V_GetValue()           PORTAbits.RA5
#define SD_HVMS_FINAL_5V_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SD_HVMS_FINAL_5V_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SD_HVMS_FINAL_5V_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SD_HVMS_FINAL_5V_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SD_HVMS_FINAL_5V_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SD_HVMS_FINAL_5V_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SD_HVMS_FINAL_5V_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define SD_HVMS_FINAL_5V_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set CURRENT_DIGITAL aliases
#define CURRENT_DIGITAL_TRIS                 TRISAbits.TRISA6
#define CURRENT_DIGITAL_LAT                  LATAbits.LATA6
#define CURRENT_DIGITAL_PORT                 PORTAbits.RA6
#define CURRENT_DIGITAL_WPU                  WPUAbits.WPUA6
#define CURRENT_DIGITAL_OD                   ODCONAbits.ODCA6
#define CURRENT_DIGITAL_ANS                  ANSELAbits.ANSELA6
#define CURRENT_DIGITAL_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define CURRENT_DIGITAL_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define CURRENT_DIGITAL_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define CURRENT_DIGITAL_GetValue()           PORTAbits.RA6
#define CURRENT_DIGITAL_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define CURRENT_DIGITAL_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define CURRENT_DIGITAL_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define CURRENT_DIGITAL_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define CURRENT_DIGITAL_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define CURRENT_DIGITAL_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define CURRENT_DIGITAL_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define CURRENT_DIGITAL_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set TRIP_5K aliases
#define TRIP_5K_TRIS                 TRISAbits.TRISA7
#define TRIP_5K_LAT                  LATAbits.LATA7
#define TRIP_5K_PORT                 PORTAbits.RA7
#define TRIP_5K_WPU                  WPUAbits.WPUA7
#define TRIP_5K_OD                   ODCONAbits.ODCA7
#define TRIP_5K_ANS                  ANSELAbits.ANSELA7
#define TRIP_5K_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define TRIP_5K_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define TRIP_5K_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define TRIP_5K_GetValue()           PORTAbits.RA7
#define TRIP_5K_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define TRIP_5K_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define TRIP_5K_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define TRIP_5K_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define TRIP_5K_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define TRIP_5K_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define TRIP_5K_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define TRIP_5K_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set AIR2_5V aliases
#define AIR2_5V_TRIS                 TRISBbits.TRISB0
#define AIR2_5V_LAT                  LATBbits.LATB0
#define AIR2_5V_PORT                 PORTBbits.RB0
#define AIR2_5V_WPU                  WPUBbits.WPUB0
#define AIR2_5V_OD                   ODCONBbits.ODCB0
#define AIR2_5V_ANS                  ANSELBbits.ANSELB0
#define AIR2_5V_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define AIR2_5V_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define AIR2_5V_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define AIR2_5V_GetValue()           PORTBbits.RB0
#define AIR2_5V_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define AIR2_5V_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define AIR2_5V_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define AIR2_5V_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define AIR2_5V_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define AIR2_5V_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define AIR2_5V_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define AIR2_5V_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set AIR1_5V aliases
#define AIR1_5V_TRIS                 TRISBbits.TRISB1
#define AIR1_5V_LAT                  LATBbits.LATB1
#define AIR1_5V_PORT                 PORTBbits.RB1
#define AIR1_5V_WPU                  WPUBbits.WPUB1
#define AIR1_5V_OD                   ODCONBbits.ODCB1
#define AIR1_5V_ANS                  ANSELBbits.ANSELB1
#define AIR1_5V_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define AIR1_5V_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define AIR1_5V_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define AIR1_5V_GetValue()           PORTBbits.RB1
#define AIR1_5V_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define AIR1_5V_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define AIR1_5V_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define AIR1_5V_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define AIR1_5V_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define AIR1_5V_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define AIR1_5V_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define AIR1_5V_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set PRECHARGE_5V aliases
#define PRECHARGE_5V_TRIS                 TRISBbits.TRISB2
#define PRECHARGE_5V_LAT                  LATBbits.LATB2
#define PRECHARGE_5V_PORT                 PORTBbits.RB2
#define PRECHARGE_5V_WPU                  WPUBbits.WPUB2
#define PRECHARGE_5V_OD                   ODCONBbits.ODCB2
#define PRECHARGE_5V_ANS                  ANSELBbits.ANSELB2
#define PRECHARGE_5V_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define PRECHARGE_5V_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define PRECHARGE_5V_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define PRECHARGE_5V_GetValue()           PORTBbits.RB2
#define PRECHARGE_5V_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define PRECHARGE_5V_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define PRECHARGE_5V_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define PRECHARGE_5V_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define PRECHARGE_5V_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define PRECHARGE_5V_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define PRECHARGE_5V_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define PRECHARGE_5V_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set ICSPCLK aliases
#define ICSPCLK_TRIS                 TRISBbits.TRISB6
#define ICSPCLK_LAT                  LATBbits.LATB6
#define ICSPCLK_PORT                 PORTBbits.RB6
#define ICSPCLK_WPU                  WPUBbits.WPUB6
#define ICSPCLK_OD                   ODCONBbits.ODCB6
#define ICSPCLK_ANS                  ANSELBbits.ANSELB6
#define ICSPCLK_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define ICSPCLK_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define ICSPCLK_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define ICSPCLK_GetValue()           PORTBbits.RB6
#define ICSPCLK_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define ICSPCLK_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define ICSPCLK_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define ICSPCLK_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define ICSPCLK_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define ICSPCLK_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define ICSPCLK_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define ICSPCLK_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set ICSPDAT aliases
#define ICSPDAT_TRIS                 TRISBbits.TRISB7
#define ICSPDAT_LAT                  LATBbits.LATB7
#define ICSPDAT_PORT                 PORTBbits.RB7
#define ICSPDAT_WPU                  WPUBbits.WPUB7
#define ICSPDAT_OD                   ODCONBbits.ODCB7
#define ICSPDAT_ANS                  ANSELBbits.ANSELB7
#define ICSPDAT_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define ICSPDAT_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define ICSPDAT_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define ICSPDAT_GetValue()           PORTBbits.RB7
#define ICSPDAT_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define ICSPDAT_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define ICSPDAT_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define ICSPDAT_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define ICSPDAT_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define ICSPDAT_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define ICSPDAT_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define ICSPDAT_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

// get/set CURRENT_ANALOG_1 aliases
#define CURRENT_ANALOG_1_TRIS                 TRISCbits.TRISC0
#define CURRENT_ANALOG_1_LAT                  LATCbits.LATC0
#define CURRENT_ANALOG_1_PORT                 PORTCbits.RC0
#define CURRENT_ANALOG_1_WPU                  WPUCbits.WPUC0
#define CURRENT_ANALOG_1_OD                   ODCONCbits.ODCC0
#define CURRENT_ANALOG_1_ANS                  ANSELCbits.ANSELC0
#define CURRENT_ANALOG_1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define CURRENT_ANALOG_1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define CURRENT_ANALOG_1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define CURRENT_ANALOG_1_GetValue()           PORTCbits.RC0
#define CURRENT_ANALOG_1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define CURRENT_ANALOG_1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define CURRENT_ANALOG_1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define CURRENT_ANALOG_1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define CURRENT_ANALOG_1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define CURRENT_ANALOG_1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define CURRENT_ANALOG_1_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define CURRENT_ANALOG_1_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set IMD_SD_DRIVER aliases
#define IMD_SD_DRIVER_TRIS                 TRISCbits.TRISC1
#define IMD_SD_DRIVER_LAT                  LATCbits.LATC1
#define IMD_SD_DRIVER_PORT                 PORTCbits.RC1
#define IMD_SD_DRIVER_WPU                  WPUCbits.WPUC1
#define IMD_SD_DRIVER_OD                   ODCONCbits.ODCC1
#define IMD_SD_DRIVER_ANS                  ANSELCbits.ANSELC1
#define IMD_SD_DRIVER_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IMD_SD_DRIVER_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IMD_SD_DRIVER_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IMD_SD_DRIVER_GetValue()           PORTCbits.RC1
#define IMD_SD_DRIVER_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IMD_SD_DRIVER_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IMD_SD_DRIVER_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IMD_SD_DRIVER_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IMD_SD_DRIVER_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IMD_SD_DRIVER_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IMD_SD_DRIVER_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define IMD_SD_DRIVER_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set BMS_SD_DRIVER aliases
#define BMS_SD_DRIVER_TRIS                 TRISCbits.TRISC2
#define BMS_SD_DRIVER_LAT                  LATCbits.LATC2
#define BMS_SD_DRIVER_PORT                 PORTCbits.RC2
#define BMS_SD_DRIVER_WPU                  WPUCbits.WPUC2
#define BMS_SD_DRIVER_OD                   ODCONCbits.ODCC2
#define BMS_SD_DRIVER_ANS                  ANSELCbits.ANSELC2
#define BMS_SD_DRIVER_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define BMS_SD_DRIVER_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define BMS_SD_DRIVER_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define BMS_SD_DRIVER_GetValue()           PORTCbits.RC2
#define BMS_SD_DRIVER_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define BMS_SD_DRIVER_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define BMS_SD_DRIVER_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define BMS_SD_DRIVER_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define BMS_SD_DRIVER_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define BMS_SD_DRIVER_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define BMS_SD_DRIVER_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define BMS_SD_DRIVER_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set CURRENT_ANALOG_2 aliases
#define CURRENT_ANALOG_2_TRIS                 TRISCbits.TRISC3
#define CURRENT_ANALOG_2_LAT                  LATCbits.LATC3
#define CURRENT_ANALOG_2_PORT                 PORTCbits.RC3
#define CURRENT_ANALOG_2_WPU                  WPUCbits.WPUC3
#define CURRENT_ANALOG_2_OD                   ODCONCbits.ODCC3
#define CURRENT_ANALOG_2_ANS                  ANSELCbits.ANSELC3
#define CURRENT_ANALOG_2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define CURRENT_ANALOG_2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define CURRENT_ANALOG_2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define CURRENT_ANALOG_2_GetValue()           PORTCbits.RC3
#define CURRENT_ANALOG_2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define CURRENT_ANALOG_2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define CURRENT_ANALOG_2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define CURRENT_ANALOG_2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define CURRENT_ANALOG_2_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define CURRENT_ANALOG_2_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define CURRENT_ANALOG_2_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define CURRENT_ANALOG_2_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/