/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *

DC Motor LAB.
2021-04-23
5V dc motor
FQU13N10LTU-ND mosfet
LCD connections. pin1: ground, pin2: 5V from VDD pin on psoc, pin3: contrast via volatage divider 3k/330 resistors from VDD
pin4: pin_2_5 on psoc, pin5: pin_2_6 psoc, pin6: pin_2_4 psoc, pins7~11: not used, pin12: pin_2_1 psoc, pin13: pin_2_2 psoc
pin14: pin_2_3 psoc, pins15 and 16: not used.
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    //set pin_12_6 to low
    //Pin_12_6_Write(0);
    Pin_12_7_Write(0);
    
    LCD_Start();
    LCD_Position(0, 0);
    LCD_PrintString("bungineer");
    for(;;)
    {
        //to test how to use digital output pins, I will set an LED on a pin.
        Pin5_1_Write( !Pin5_1_Read()); //digital output pin. Uncheck "HW connection", check "external terminal", set drive type to "resistive pull down" to make it initially off.
        CyDelay(250); //blink at 4Hz.
        
        //turn the motor on and off
        //Pin_12_7_Write( !Pin_12_7_Read());
     
    }
}
