#ifndef MEMORY_MANAGER_H_
#define MEMORY_MANAGER_H_

#include <stdint.h>

#define READ_COMMAND 0x03           //0000 0011
#define WRITE_COMMAND 0x02          //0000 0010

#define READ_MODE_DEFAULT 0x05 		//0000 0101
#define READ_MODE_PAGE 0x06 		//0000 0110
#define READ_MODE_BYTE 0x04 		//0000 0100

#define WRITE_MODE_DEFAULT 0x01 	//0000 0001
#define WRITE_MODE_PAGE 0x02		//0000 0010
#define WRITE_MODE_BYTE 0x00		//0000 0000

extern uint32_t mem_addr;
extern int total_mem;
//include the following lines in main.c, replacing num_modules with a value:
//uint32_t mem_addr = 0;
//int total_mem = init_sram(/*num_modules*/);

int init_sram(int num_modules);
void read_external_ram(uint8_t* data, uint32_t address, int bytes);
void write_external_ram(uint8_t* data, uint32_t address, int bytes);
void read_mode(uint8_t rm);
void write_mode(uint8_t wm);

#endif /* MEMORY_MANAGER_H_ */
