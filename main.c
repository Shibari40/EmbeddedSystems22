/* 
 * File:   main.c
 * Author: jerry
 *
 * Created on December 16, 2022, 11:15 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "memory.h"
#include "oscillator.h"
#include "timer.h"

// CONFIG1
#pragma config WDTE = WDTE_ON       // Watchdog Timer Enable (WDT disabled)
#pragma config MCLRE = MCLRE_ON    // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config IESO = ON        // Internal/External Switchover (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)

#define _XTAL_FREQ 8000000     // Set clock frequency for delay functions

/*
 * 
 */
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

