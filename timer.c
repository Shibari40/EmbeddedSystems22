/*
 * File:   timer.c
 * Author: jerry
 *
 * Created on December 16, 2022, 11:23 AM
 */


#include <xc.h>

#pragma config WPUEN    =  // 1) disable weak pull-ups. 0) weak pull-ups enabled
#pragma config INTEDG   =  // 1) interrupt on rising. 0) interrupt on falling
#pragma config TMR0CS   =  // 1) timer source from pin. 0) timer source from clock
#pragma config TMR0SE   =  //
#pragma config PSA      =  //
#pragma config PS<2:0>  = 111

void main(void) {
    return;
}
