#include "bmp.h"

BMP::BMP(uint16_t h, uint16_t w){
	height = h;
	width = w;
	dat = (uint8_t *)calloc((uint16_t)height*width, sizeof(uint8_t));
}

BMP::~BMP(){
	free(dat);
}

void BMP::init(){
	for(uint32_t i = 0; i < (height*width); i++){
		*(dat + i) = i;
	}
}
