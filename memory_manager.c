#include "memory_manager.h"

/*
 *  Memory module is 256K bytes x 8 bits w/addresses stored as 24 bits
 *  Max address for module: 0x3FFFF
 *  Min address for module: 0x00000
 *  CS/SS:  10
 *  CLK:    13
 *  MOSI:   11
 *  MISO:   12
 */

//initialize SRAM
int init_sram(int num_modules)
{
    int bytes_per_mod = 256000; //this is specific to this chip
    return num_modules*bytes_per_mod;
}

//read data
void read_external_ram(uint8_t* data, uint32_t address, int bytes)
{

}

//write data
void write_external_ram(uint8_t* data, uint32_t address, int bytes)
{

}

//modify read mode - sequential (default), page, or byte
void read_mode(uint8_t rm)
{

}

//modify write mode - sequential (default), page, or byte
void write_mode(uint8_t wm)
{

}
