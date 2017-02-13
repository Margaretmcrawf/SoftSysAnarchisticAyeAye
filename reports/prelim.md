# Anarchistic Aye Aye Preliminary Report

Margo and Joseph

## Project Goal and Overview:

 We aim to use an Arduino Mega (ATmega2560) to create an 8-bit audio synthesizer that can reproduce sine waves of arbitrary frequency in response to some form of user input (probably button presses with a different button for each frequency, though this is flexible and could become something more interesting later on if we have time). We have a very diverse set of options as stretch goals, but our most immediate stretch goal would be to implement the ability to reproduce harmonics, i.e. polyphony.  Other possibilities include having potentiometers for adjusting acoustic effects (maybe echo, sustain, or if we want to get really into it, vibrato).

## Progress:

Sprint 1:

* Sprint Planning - can be seen as complete through the archived boards for sprint 1 backlog, sprint 1 doing, and sprint 1 done on our [trello](https://trello.com/b/mgbMSL8K/softsysanarchisticayeaye).
* [Create GitHub Repo](https://github.com/jaredbriskman/SoftSysAnarchisticAyeAye)
* [Form team Slack channel](https://anarchisticayeaye.slack.com/messages/general/)
* Define project scope and interest - can be seen as complete through [our](https://github.com/JosephLee19/ExercisesInC/blob/master/reflections/reflection0.md) 
[reflection0’s](https://github.com/Margaretmcrawf/ExercisesInC/blob/master/reflections/reflection0.md) and from our project proposal
* Write draft proposal - nothing to prove that this was completed, other than to say that it is what developed into our final proposal.
* Blink an LED on an arduino in C - code that was used to blink LED - no proof as we later updated this function to be our digital output/square wave function
* Pick hardware - we have our circuit built so obviously we picked our hardware
* [Create final proposal](https://github.com/jaredbriskman/SoftSysAnarchisticAyeAye/blob/master/reports/proposal.md)
* Acquire hardware - again we built our circuit so obviously we successfully acquired the hardware to do it
* Build circuit - photo of our circuit:
* Create digital output function - related to blinking an LED, [this](https://github.com/jaredbriskman/SoftSysAnarchisticAyeAye/blob/master/rawCblink.ino) was the function we used to produce square waves
* Sprint retro - talked about in our end of [sprint](https://github.com/Margaretmcrawf/ExercisesInC/blob/master/reflections/reflection1.md) [reflections](https://github.com/JosephLee19/ExercisesInC/blob/master/reflections/reflection1.md), our kaizen was to discuss reading questions as a team

Sprint 2:

* Sprint Planning - again, this can be seen in our archived [trello](https://trello.com/b/mgbMSL8K/softsysanarchisticayeaye) boards
* Figure out how to pass around sine waves in C - we researched and decided to use arrays, or “wave tables”.
* Create an array that represents sine waves that we can pass to arduino - can be seen in our preliminary results section


## Preliminary Results:

 Currently, we have a program that can output 256 values between 0 and 256 (8 bits) in an array. This is convenient since we are using an 8 bit DAC for our project. We can directly assign PORTA (the 8-pin port on the arduino connected to the DAC) to equal a value in the array, which will generate an analog output proportional to the value in the array. PORTA can be sequentially assigned to each value in the array at the appropriate rate, corresponding to the frequency of the sine wave reproduced. To do this we will need to work with the Arduino Mega’s hardware clock/counter to index through the array at the appropriate rate.

`$ ./freq_to_sine`

`Please enter a frequency: 440`

`You entered: 440`

`Wave_Table =
[128 131 134 137 140 143 146 149 152 156 159 162 165 168 171 174 176 179 182 185 188 191 193 196 199 201 204 206 209 211 213 216 218 220 222 224 226 228 230 232 234 236 237 239 240 242 243 245 246 247 248 249 250 251 252 252 253 254 254 255 255 255 255 255 256 255 255 255 255 255 254 254 253 252 252 251 250 249 248 247 246 245 243 242 240 239 237 236 234 232 230 228 226 224 222 220 218 216 213 211 209 206 204 201 199 196 193 191 188 185 182 179 176 174 171 168 165 162 159 156 152 149 146 143 140 137 134 131 128 124 121 118 115 112 109 106 103 99 96 93 90 87 84 81 79 76 73 70 67 64 62 59 56 54 51 49 46 44 42 39 37 35 33 31 29 27 25 23 21 19 18 16 15 13 12 10 9 8 7 6 5 4 3 3 2 1 1 0 0 0 0 0 0 0 0 0 0 0 1 1 2 3 3 4 5 6 7 8 9 10 12 13 15 16 18 19 21 23 25 27 29 31 33 35 37 39 42 44 46 49 51 54 56 59 62 64 67 70 73 76 79 81 84 87 90 93 96 99 103 106 109 112 115 118 121 124]`

We also have a program that generates and plays a square wave. [Here](https://github.com/jaredbriskman/SoftSysAnarchisticAyeAye/blob/master/rawCblink.ino) is a link to this code as well as a video of the circuit producing the square wave.


## Annotated Bibliography:

#### [AVR Synth Tutorials](http://playground.arduino.cc/Main/ArduinoSynth)
A list of AVR synthesizer projects, with plenty of links to other resources.

#### [Arduino Sound (Part 1)](http://www.uchobby.com/index.php/2007/11/11/arduino-sound-part-1/)
A very thorough breakdown of all the pros and cons of different ways to synthesize sound with an arduino, along with links to examples of each. This is by far one of the most useful resources we have found - highly recommended.

#### [Direct Digital Synthesis Tutorial](http://codeandlife.com/2012/03/13/fast-dds-with-atmega88/)
A tutorial for generating sine waves via direct digital synthesis in software. Also dips a little into optimization with Assembly.
Building an Arduino Based Musical Synthesizer

#### [Build The SoftSysSynth](http://thinkdsp.blogspot.com/2014/02/build-softsyssynth.html)
A set of step by step instructions for assembling the hardware for an arduino synthesizer. We based our hardware off of this.

#### [Arduino Timer Interrupts](http://www.instructables.com/id/Arduino-Timer-Interrupts/)
A tutorial for how to work with the built in timers on arduino, which will allow us to very precisely tune the frequency of our output.

## Product Backlog:
A link to our trello board showing our sprint planning and project backlog:
https://trello.com/b/mgbMSL8K/softsysanarchisticayeaye

## Potential Roadblocks Moving Forward:
* We need to be careful to appropriately scope our project work, readings, and expectations particularly given that our team has gone from being a 4 member team to being a 2 member team
* In previous sprints, other classes have been a roadblock to putting reasonable amounts of time into the project - we need to be more explicit about scheduling our time to prevent this from being a problem moving forward (specifically, we have added “due dates” for many of the cards in our TODO list for this sprint, for our reference and to help us stay on track).
