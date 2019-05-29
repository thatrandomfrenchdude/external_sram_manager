/*
 * memory_manager.h
 *
 *  Created on: May 22, 2019
 *      Author: nxf45901
 */

#ifndef MEMORY_MANAGER_H_
#define MEMORY_MANAGER_H_

#include <stdint.h>

#define READ_COMMAND 0x03 			//0000 0011
#define WRITE_COMMAND 0x02 			//0000 0010

#define READ_MODE_DEFAULT 0x05 		//0000 0101
#define READ_MODE_PAGE 0x06 		//0000 0110
#define READ_MODE_BYTE 0x04 		//0000 0100

#define WRITE_MODE_DEFAULT 0x01 	//0000 0001
#define WRITE_MODE_PAGE 0x02		//0000 0010
#define WRITE_MODE_BYTE 0x00		//0000 0000

//data on external SRAM is organized 256K bytes x 8 bits
uint8_t memory_pointer;

#endif /* MEMORY_MANAGER_H_ */
