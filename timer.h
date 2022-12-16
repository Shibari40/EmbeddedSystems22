/* 
 * File:   Timer.h
 * Author: jerry
 *
 * Created on December 16, 2022, 11:12 AM
 */

#ifndef TIMER_H
#define	TIMER_H

typedef enum _timerrate{
    scale2 =    000,
    scale4 =    001,
    scale8 =    010,
    scale16 =   011,
    scale32 =   100,
    scale64 =   101,
    scale128 =  110,
    scale256 =  111
} timerrate;

void init_timer(void);


#endif	/* TIMER_H */

