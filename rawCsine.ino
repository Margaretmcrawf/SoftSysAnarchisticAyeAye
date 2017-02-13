/* 
* This function will take a user inputted frequency, and return a sine wave 
* (or wave of some sort) at the desired frequency as an array.
* Currently, it prints 256 values between 0 and 256 that represent a sine wave, 
* then asks the user for a frequency and prints it back to them.
* Note the extra parameters, which allow math to work.
* Authors: Margo Crawford and Joseph Lee.
*/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <avr/io.h>
#include <util/delay.h>

#define PI 3.14159265

int main() {
int n;
DDRA = 0xff;

int waveTable[256]; // a table for putting the waves

for (int i = 0; i < 256; i++) {
  double rad = (i * 2 * PI) / 256;
  waveTable[i] = (int) (sin(rad) + 1) * 128;
}


long delayTime = 1;

while(1) {
  for (int i = 0; i < 256; i++) {
    PORTA = waveTable[i];
    delay(delayTime); 
  }
}

return 0;
}
