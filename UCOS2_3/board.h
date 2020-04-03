/*
 * board.h
 *
 * Created: 6/22/2013 5:56:42 AM
 *  Author: MOSTAFA
 */ 
#ifndef __BOARD_H__
#define __BOARD_H__

#define LED1                            0
#define LED2                            1
#define LED3                            2
#define LED4                            3

//---------¶???????£¬H??????³?¸?µç?½£¬L??????³?µ?µç?½£¬R??????³?²¢??·´------------
#define GPIO_OUT_H(io, x);      {DDR##io |= (1 << (x & 0x07)); PORT##io |=  (1 << (x & 0x07));}
#define GPIO_OUT_L(io, x);      {DDR##io |= (1 << (x & 0x07)); PORT##io &= ~(1 << (x & 0x07));}
#define GPIO_OUT_R(io, x);      {DDR##io |= (1 << (x & 0x07)); PORT##io ^=  (1 << (x & 0x07));}

void timer0_init_ucos(void);
void timer3_init_ucos(void);

#endif

