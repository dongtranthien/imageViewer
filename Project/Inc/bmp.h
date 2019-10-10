/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __BMP_H
#define __BMP_H

#include <stdint.h>
#include <stdlib.h>

class BMP{
	public:
		BMP(uint16_t h, uint16_t w);
		void init();
		uint8_t get1(uint16_t index);
	
	private:
		uint16_t height, width;
		uint8_t *dat;
};

#endif