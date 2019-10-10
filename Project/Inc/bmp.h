/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __BMP_H
#define __BMP_H

#include <stdint.h>
#include <stdlib.h>

class BMP{
	public:
		BMP(uint16_t h, uint16_t w);
		~BMP();
		void init();
		uint8_t* getImage(void);
		uint8_t *dat;
	
	private:
		uint16_t height, width;
		
};

#endif
