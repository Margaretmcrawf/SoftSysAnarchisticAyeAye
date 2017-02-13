#include <avr/io.h>
#include <util/delay.h>
 
#define ON_TIME 5
#define OFF_TIME 5
 
int main (void)
{
 DDRA = 0xff;

 while(1) {
  PORTA = 0xff;

  _delay_ms(ON_TIME);
 
  PORTA &= 0x00;
  _delay_ms(OFF_TIME);
 }
}
