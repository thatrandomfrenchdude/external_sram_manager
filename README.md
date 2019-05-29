# SPI-based External SRAM Memory Manager
This code maps and handles memory on external SRAM chips. This memory manager is limited only to the number of chip selects available on the SPI master and the size of the memory on each chip. The project-specific configuration can be customized using the initialization method.

## Hardware
This code is specifically written for the following chips:
  - IS62/65WVS2568GALL
  - IS62/65WVS2568GBLL 

It should support other ISSI SPI-based ram as well as other SPI-based external SRAM chips provided that they operate in a similar manner. If this code does not work for a chip, it is possible to make it work by modifying the methods to match the operating procedures for that chip.

## License
[GNU](https://choosealicense.com/licenses/gpl-3.0/)
