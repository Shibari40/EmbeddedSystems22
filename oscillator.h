/* 
 * File:   oscillator.h
 * Author: jerry
 *
 * Created on 02 January 2023, 15:02
 */
#ifndef OSCILLATOR_H
#define	OSCILLATOR_H

typedef enum _clockmode{
    externalLP = 0101, //External Clock Low-power, 0-0.5 MHz (EC Low)
    externalMP = 0110, //External Clock Medium power, 0.5-4 MHz (EC Med)
    externalHP = 0111, //External Clock High-power, 4-32 MHz (EC High)
    Lcrystal   = 0000, //32.768 kHz tuning-fork crystals (watch crystals) (LP)
    Mcrystal   = 0001, //suits resonators with a medium drive level setting (XT)
    Hcrystal   = 0010, //suits resonators that require a high drive setting (HS)
    externalRC = 0011, //support the use of an external RC circuit (RC)
    internal   = 1000  //use internal oscillator block as the system clock (INTOSC)
} clockmode;

#endif	/* OSCILLATOR_H */

