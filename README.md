# SPI-based External SRAM Memory Manager

## This code is a WORK IN PROGRESS
Currently there are linker issues with my header file and the Arduino library, so I will most likely transition to a full-fledged embedded C implementation.

## Description
This code maps and handles memory on external SRAM chips. This memory manager is limited to the number of chip selects available on the SPI master and the amount of memory on each chip. The project-specific memory configuration can be customized using the initialization method.  

## Hardware
### MCU
The functions are written for use with a Teensy board being programmed using Platformio or Teensyduino (ie. access to the Arduino header file). Current code assumes pins are mapped to a Teensy 3.2 and that SPI has been properly initialized in the setup() loop. The functions can be modified for use with traditional embedded C/C++ by modifying the SPI function calls. Comments have been included to identify some of the changes necessary to use this code with traditional embedded C/C++.

### SRAM Modules
This code is specifically written for the following chips:
  - IS62/65WVS2568GALL
  - IS62/65WVS2568GBLL

It should support other ISSI SPI-based ram as well as other SPI-based external SRAM chips provided that they operate in a similar manner. If this code does not work for a chip, it is possible to make it work by modifying the methods to match the operating procedures for that chip.

## Future Work
Upon completion of the Arduino/Teensy-based implementation, a full, embedded C/C++ version will be created for use with the FRDM-K66F.

## License
[GNU](https://choosealicense.com/licenses/gpl-3.0/)
