/*
 *  Memory module is 256K bytes x 8 bits w/addresses stored as 24 bits
 *  Max address for module: 0x3FFFF
 *  Min address for module: 0x00000
 *  CS/SS:  10
 *  CLK:    13
 *  MOSI:   11
 *  MISO:   12
 *
 *  0x3FFFF = 262,143, more than 256K
 *  Are there DNU registers?
 */

#include "memory_manager.h"

//initialize SRAM
int init_sram(int num_modules)
{
    int bytes_per_mod = 256000; //this is specific to this chip
    return num_modules*bytes_per_mod;
}

//read data
void read_external_ram(uint8_t* data, uint32_t address, int bytes)
{
    int i;

    //prep data
    uint8_t t1 = address >> 16;
    uint8_t t2 = address >> 8;
    uint8_t t3 = address;

    // communication
    SPI.beginTransaction(SPISettings(45000000, MSBFIRST, SPI_MODE1));
    digitalWrite(CS, LOW);

    // send read command and address to be read
    SPI.transfer(READ_COMMAND);
    SPI.transfer(t1);
    SPI.transfer(t2);
    SPI.transfer(t3);

    //send dummy data to SPI to receive data back
    for (i = 0; i < bytes + 1; i++) {
        Serial.print(SPI.transfer(0));
    }

    //end communication
    digitalWrite(CS, HIGH);
    SPI.endTransaction();
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
