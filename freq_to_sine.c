/* 
* This function will take a user inputted frequency, and return a sine wave 
* (or wave of some sort) at the desired frequency as an array.
* Currently, it prints 256 values between 0 and 256 that represent a sine wave, 
* then asks the user for a frequency and prints it back to them.

* Changing things back to a working version so I can put them in the report.

* Authors: Margo Crawford and Joseph Lee.
*/

#include <stdio.h>
#include <math.h>
#include <time.h>

#define PI 3.14159265

void printArray(int input[256]) {
	char output[515];
	for (int i = 0; i < 256; i++) {
		output[2*i] = input[i];
		output[2*i + 1] = ' ';
	}
	printf("%s\n", output);
}

int main() {
int n;

int waveTable[256]; // a table for putting the waves

for (int i = 0; i < 256; i++) {
	double rad = (i * 2 * PI) / 256;
	double doubleSin = (sin(rad) + 1) * 128;
	waveTable[i] = (int) doubleSin;
}

printf("Please enter a frequency: ");
scanf("%d", &n);
printf("You entered: %d\n",n);
long delayTime = 1000/n;


for (int i = 0; i < 256; i++) {
	printf("%i", waveTable[i]);
	printf("%c", ',');
}

// printArray(waveTable);

return 0;
}