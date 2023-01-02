/* 
 * File:   oscillator.h
 * Author: jerry
 *
 * Created on 02 January 2023, 15:02
 */
#ifndef OSCILLATOR_H
#define	OSCILLATOR_H

typedef enum _fosc_t{
    FOSC_INTOSC  = 0b001,  // Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin)
    FOSC_EXTRC   = 0b010,  // Oscillator Selection (EXTRC oscillator: External RC circuit connected to CLKIN pin)
    FOSC_HS      = 0b011,  // Oscillator Selection (HS oscillator: High-speed crystal/resonator connected between OSC1 and OSC2 pins)
    FOSC_XT      = 0b100,  // Oscillator Selection (XT oscillator: Crystal/resonator connected between OSC1 and OSC2 pins)
    FOSC_LP      = 0b101,  // Oscillator Selection (LP oscillator: Low-power crystal connected between OSC1 and OSC2 pins)
    FOSC_EC      = 0b110,  // Oscillator Selection (EC oscillator: External clock source connected to CLKIN pin)
    FOSC_ECIO    = 0b111   // Oscillator Selection (ECIO oscillator: External clock source input on OSC1 pin and output on OSC2 pin)
} ;

#endif	/* OSCILLATOR_H */

