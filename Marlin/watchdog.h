#ifndef __WATCHDOGH
#define __WATCHDOGH
#ifdef
/// intialise watch dog with a 1 sec interrupt time
void wd_init();
/// pad the dog/reset watchdog. MUST be called at least every second after the first wd_init or avr will go into emergency procedures..
void wd_reset();


#endif
