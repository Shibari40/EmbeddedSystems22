/* 
 * File:   main.h
 * Author: jerry
 *
 * Created on 02 January 2023, 16:50
 */

#ifndef MAIN_H
#define	MAIN_H

typedef enum _wdte_t{
    WDTE_ON  = 0b1,   // Watchdog Timer Enable (WDT enabled)
    WDTE_OFF = 0b0    // Watchdog Timer Enable (WDT disabled)
} WDTE_t;

#endif	/* MAIN_H */

