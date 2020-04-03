/*
 * board.c
 *
 * Created: 6/22/2013 5:55:51 AM
 *  Author: MOSTAFA
 */ 
#include "config.h"

//==========================================================================================
//??????ucos?�??�?��?�?�??�?���?�???T0??T3��?????��?��?????�???�
//?��??�???������????�??�os_cpu_a.S??�???�??�?��?�??�
//T0�?TIMER0_COMP_vect �?T3:TIMER3_COMPA_vect
//OSC = 8000000Hz
/*?�??atmega128�?8?���?�?�Timer0�???�?�?�??�??��??�???��?�??�?,�??????趨??200Hz(5ms)*/

/*Function Implement*/
void timer0_init_ucos(void)
{
	long int xx= 1024* OS_TICKS_PER_SEC;
    TCCR0  = 0x6F;                                      /* Set TIMER0 prescaler to CTC Mode, CLK/256   */
    TCNT0  =    0;                                      /* Start TCNT at 0 for a new cycle             */
    OCR0   =(uint8)(F_CPU_M/ (xx) ) - 1;
    TIFR  |= 0x02;                                      /* Clear  TIMER0 compare Interrupt Flag        */
    TIMSK |= 0x02;                                      /* Enable TIMER0 compare Interrupt             */
}

//TIMER3 initialize - prescale:1024
// WGM: 4) CTC, TOP=OCRnA
// desired value: 200Hz
// actual value: 200.321Hz (0.2%)
/*Function Declared*/
//OSC = 8000000Hz
/*?�??atmega128�?8?���?�?�Timer3�???�?�?�??�??A��??�???��?�??�?,�??????趨??200Hz(5ms)*/
void timer3_init_ucos(void)
{
	TCCR3B = 0x00; //stop
	TCNT3H = 0x00; //setup
	TCNT3L = 0x00;
	OCR3AH = 0x00;
	OCR3AL = 0x28;
	TCCR3A = 0x00; //OC3C??�??�?��?
	TCCR3B = _BV(WGM32)|_BV(CS32)|_BV(CS30); //start Timer CTC 1024�??�
	ETIFR |= _BV(OCF3A);            /*??�???�?�?�??�????�?��?�?���?�1??0            */
	ETIMSK|= _BV(OCIE3A);       /*?�????�?�?�??�????�?                                          */
	sei();                              /*?�???��???�?                                                          */
}
