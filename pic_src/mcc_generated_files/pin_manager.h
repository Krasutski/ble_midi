/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB� Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB� Code Configurator - v2.25.2
        Device            :  PIC16F1459
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SDI aliases
#define SDI_TRIS               TRISB4
#define SDI_LAT                LATB4
#define SDI_PORT               RB4
#define SDI_WPU                WPUB4
#define SDI_ANS                ANSB4
#define SDI_SetHigh()    do { LATB4 = 1; } while(0)
#define SDI_SetLow()   do { LATB4 = 0; } while(0)
#define SDI_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define SDI_GetValue()         RB4
#define SDI_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define SDI_SetPullup()    do { WPUB4 = 1; } while(0)
#define SDI_ResetPullup()   do { WPUB4 = 0; } while(0)
#define SDI_SetAnalogMode()   do { ANSB4 = 1; } while(0)
#define SDI_SetDigitalMode()   do { ANSB4 = 0; } while(0)
// get/set SPI_SS aliases
#define SPI_SS_TRIS               TRISB5
#define SPI_SS_LAT                LATB5
#define SPI_SS_PORT               RB5
#define SPI_SS_ANS                ANSB5
#define SPI_SS_SetHigh()    do { LATB5 = 1; } while(0)
#define SPI_SS_SetLow()   do { LATB5 = 0; } while(0)
#define SPI_SS_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define SPI_SS_GetValue()         RB5
#define SPI_SS_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define SPI_SS_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define SPI_SS_SetAnalogMode()   do { ANSB5 = 1; } while(0)
#define SPI_SS_SetDigitalMode()   do { ANSB5 = 0; } while(0)
// get/set SCK aliases
#define SCK_TRIS               TRISB6
#define SCK_LAT                LATB6
#define SCK_PORT               RB6
#define SCK_WPU                WPUB6
#define SCK_SetHigh()    do { LATB6 = 1; } while(0)
#define SCK_SetLow()   do { LATB6 = 0; } while(0)
#define SCK_Toggle()   do { LATB6 = ~LATB6; } while(0)
#define SCK_GetValue()         RB6
#define SCK_SetDigitalInput()    do { TRISB6 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISB6 = 0; } while(0)

#define SCK_SetPullup()    do { WPUB6 = 1; } while(0)
#define SCK_ResetPullup()   do { WPUB6 = 0; } while(0)
// get/set BLE_IRQ aliases
#define BLE_IRQ_TRIS               TRISB7
#define BLE_IRQ_LAT                LATB7
#define BLE_IRQ_PORT               RB7
#define BLE_IRQ_WPU                WPUB7
#define BLE_IRQ_SetHigh()    do { LATB7 = 1; } while(0)
#define BLE_IRQ_SetLow()   do { LATB7 = 0; } while(0)
#define BLE_IRQ_Toggle()   do { LATB7 = ~LATB7; } while(0)
#define BLE_IRQ_GetValue()         RB7
#define BLE_IRQ_SetDigitalInput()    do { TRISB7 = 1; } while(0)
#define BLE_IRQ_SetDigitalOutput()   do { TRISB7 = 0; } while(0)

#define BLE_IRQ_SetPullup()    do { WPUB7 = 1; } while(0)
#define BLE_IRQ_ResetPullup()   do { WPUB7 = 0; } while(0)
// get/set LED aliases
#define LED_TRIS               TRISC2
#define LED_LAT                LATC2
#define LED_PORT               RC2
#define LED_ANS                ANSC2
#define LED_SetHigh()    do { LATC2 = 1; } while(0)
#define LED_SetLow()   do { LATC2 = 0; } while(0)
#define LED_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define LED_GetValue()         RC2
#define LED_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define LED_SetAnalogMode()   do { ANSC2 = 1; } while(0)
#define LED_SetDigitalMode()   do { ANSC2 = 0; } while(0)
// get/set SDO aliases
#define SDO_TRIS               TRISC7
#define SDO_LAT                LATC7
#define SDO_PORT               RC7
#define SDO_ANS                ANSC7
#define SDO_SetHigh()    do { LATC7 = 1; } while(0)
#define SDO_SetLow()   do { LATC7 = 0; } while(0)
#define SDO_Toggle()   do { LATC7 = ~LATC7; } while(0)
#define SDO_GetValue()         RC7
#define SDO_SetDigitalInput()    do { TRISC7 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISC7 = 0; } while(0)

#define SDO_SetAnalogMode()   do { ANSC7 = 1; } while(0)
#define SDO_SetDigitalMode()   do { ANSC7 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

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