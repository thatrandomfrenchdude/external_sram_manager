# SPI-based External SRAM Memory Manager

## Description
This code maps and handles memory on external SRAM chips. This memory manager is limited only to the number of chip selects available on the SPI master and the size of the memory on each chip. The project-specific configuration can be customized using the initialization method.  

## Hardware
### MCU
The functions are written for use with a Teensy board being programmed using Platformio or Teensyduino. The functions can be modified for use with traditional embedded C/C++ by modifying the SPI function calls. Current pins are mapped to a Teensy 3.2.

### SRAM Modules
This code is specifically written for the following chips:
  - IS62/65WVS2568GALL
  - IS62/65WVS2568GBLL 

It should support other ISSI SPI-based ram as well as other SPI-based external SRAM chips provided that they operate in a similar manner. If this code does not work for a chip, it is possible to make it work by modifying the methods to match the operating procedures for that chip.

## License
[GNU](https://choosealicense.com/licenses/gpl-3.0/)
