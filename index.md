# Arduino 8 bit Digital Audio Synthesizer
## What We Did:
As a first project for a class called Software Systems at Olin College, we made an 8-bit Arduino audio synthesizer. This project gave us the opportunity to really use C for the first time in a project setting as well as learn more about the nuances of embedded systems. Our initial plan for the project was to develop a miniature MIDI interfaced digital audio synthesizer, but as the project progressed we decided to shift gears and instead focus on sinewave synthesis. We had hoped to be able to implement polyphony and an interesting form of user interface, but this is still something to be developed. As of right now, we can currently produce a sine wave of a specific frequency. While we have not reached our end goal yet, we have learned a lot from the experience, both technical experience with C as well as experience with project scoping and adaption.


## Background:


## Implementation
Our hardware consists of an Arduino Mega(ATmega2560), an R-2R ladder network, an op-amp, a transistor, and a speaker. The ladder network is connected to 8 pins of the Mega, which allows us to pass 8 bits of resolution into the speaker. 

Our program generates a 256 element long array that contains sine wave values between 0 and 256. We then loop through each of these values and send them to the register on the Mega. When the values are passed through the ladder network, which outputs a voltage to the op-amp, which serves as a buffer. Then it is passed to the transistor which acts as an amplifier, and to the speaker which plays a sound based on how much voltage it is getting. 

When we finished this project, our biggest hurdle was getting the timing to work. The way that we had planned to loop through the values in the sine wave array was using hardware interrupts on the Mega. There is a built in timer on the board that runs at 16 mHz, and at certain times you can trigger functions. In our case, we wanted to use some conversions to set an interrupt that lined up with an input frequency, then we wanted to send a new value from the array each time the timer value was hit, and reset the timer. Unfortunately we were having a lot of trouble getting the interrupt to actually work, and Mega documentation was scarce. While debugging embedded code is a useful skill to practice, at the point that the project ended we did not think we would learn much more from continuing to work through it. One thing that could have work instead of the hardware interrupts was to find the frequency of the base loop, then calibrate it to other frequencies by using delays. 

![Image of our circuit](images/IMG_7275.JPG)

## Results:


## License:

Copyright (c) [2017] [Joseph Lee and Margo Crawford]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
