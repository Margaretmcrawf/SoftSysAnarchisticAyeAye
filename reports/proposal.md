# Anarchistic Aye Aye Project Proposal
### Margo, Joseph, Jared

## Goal:
At a minimum, we aim to use an Arduino Mega (ATmega1280) to create a 1 bit digital synthesizer to play music. (Or at least tones in Low Passed square waves)
 We would like to utilize the MIDI protocol to enable a keyboard interface to the synthesizer.
 In the first iteration, this will probably be through a third party MIDI wrapper library in C, which does most of the boilerplate error handling of the protocol.
 If we have the time, we can expand functionality by both implementing our own MIDI interface and/or using a two or more bit architecture for the synthesizer, for better output.

## Anotated Bibliography

## AVR Synth Tutorials
#### http://playground.arduino.cc/Main/ArduinoSynth

A list of AVR synthesizer projects, with plenty of links to other resources.

### Arduino Sound (Part 1)
#### http://www.uchobby.com/index.php/2007/11/11/arduino-sound-part-1/

A very thourough breakdown of all the pros and cons of different arduino sound making methods, along with link to each. Highly reccomended.

### Direct Digital Synthesis Tutorial
#### http://codeandlife.com/2012/03/13/fast-dds-with-atmega88/

A tutorial for generating sine waves via direct digital synthesis in software. Also dips into optimization with Assembly.

### AVRMIDI
#### https://github.com/boourns/AVRMIDI

A library in C for dealing with the boilerplate of MIDI. Deals with all the error handling and byte interpretation, and passes along MIDI events.

### 1-Bit AVR Synthesizer
#### https://github.com/74hc595/1-Bit-AVR-Synthesizer/

Someone else doing almost the exact project we seem to want to do, with hardware and software implementation. Have not read through as to not color mind, but may be a useful resource.

### Programming an Arduino in Pure C
####https://balau82.wordpress.com/2011/03/29/programming-arduino-uno-in-pure-c/

A useful blog post that helps understand the actual toolchain involved in flashing C code to an AVR microcontroller

## Product Backlog

Refer to trello:
https://trello.com/b/mgbMSL8K/softsysanarchisticayeaye



