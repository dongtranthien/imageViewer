#include "bmp.h"

BMP::BMP(uint16_t h, uint16_t w){
	height = h;
	width = w;	
}

BMP::~BMP(){
	free(dat);
}

void BMP::init(){
	// BMP 24 bit
	dat = (uint8_t *)calloc((uint16_t)height*width, sizeof(uint8_t));
	
	*(dat + 0x00) = 0x42;
	*(dat + 0x01) = 0x4d;
	// Size
	*(dat + 0x02) = 0x36;
	*(dat + 0x03) = 0xfa;
	*(dat + 0x04) = 0x05;
	*(dat + 0x0a) = 0x36;
	*(dat + 0x0e) = 0x28;
	*(dat + 0x12) = 0xe0;
	*(dat + 0x16) = 0x10;
	*(dat + 0x17) = 0x01;
	*(dat + 0x1a) = 0x01;
	*(dat + 0x1c) = 0x18;
	*(dat + 0x23) = 0xfa;
	*(dat + 0x24) = 0x05;
	*(dat + 0x1c) = 0x18;	
	
	for(uint32_t i = 0; i < (height*width); i++){
		*(dat + i) = i;
	}
}

uint8_t* BMP::getImage(void){
	return dat;
}
