/* 
 * File:   sample-main.c
 * Author: hashy0917
 *
 * Created on 2019/03/01, 23:39
 */

/*
#include <stdio.h>
#include <stdlib.h>
*/

/*

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

 */

#include <xc.h>
 
#pragma config FOSC = INTOSCIO
#pragma config WDTE = OFF
#pragma config PWRTE = ON
#pragma config MCLRE = OFF
#pragma config CP = OFF
#pragma config CPD = OFF
#pragma config BOREN = OFF
#pragma config IESO = OFF
#pragma config FCMEN = OFF
 
#define _XTAL_FREQ 4000000
 
int main(void)
{
    OSCCON=0b01101000;
    ANSEL=0b00000000;
    TRISIO=0b00000000;
 
    while(1)
    {
        GPIO=0b00000000;
        __delay_ms(3000);
        
        GPIO=0b00000001;
        __delay_ms(3000);
    }
    
    return(0);
}
