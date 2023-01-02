/*
 * File:   oscillator.c
 * Author: jerry
 *
 * Created on 02 January 2023, 15:02
 */


#include <xc.h>
#include "oscillator.h"

#pragma config FOSC = FOSC_INTOSC.  // Oscillator Selection (internal oscillator)
#pragma config WDTE = WDTE_OFF      // Watchdog Timer Enable (WDT disabled)

// 0x38 osccon


void main(void) {
    return;
}
