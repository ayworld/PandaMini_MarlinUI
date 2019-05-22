#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t fan_24_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xcf, 0xfc, 0x71, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9f, 0xff, 0xff, 0xfe, 0x40, 0x00, 
  0x00, 0x28, 0x95, 0x00, 0x00, 0x02, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x00, 
  0x05, 0xff, 0xff, 0xb0, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x00, 
  0x1f, 0xff, 0xff, 0xf6, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x00, 
  0x8f, 0xff, 0xff, 0xfb, 0x00, 0x0c, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x00, 
  0xdf, 0xff, 0xff, 0xfe, 0x00, 0x0c, 0xff, 0xff, 0xff, 0xff, 0x70, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0x10, 0x0b, 0xff, 0xff, 0xfd, 0x93, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0x50, 0x0a, 0xff, 0xc5, 0x00, 0x00, 0x00, 0x00, 
  0xcf, 0xff, 0xff, 0xff, 0xb0, 0xaf, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x5f, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xb0, 0x00, 0x00, 0x00, 0x00, 
  0x06, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x89, 0xa8, 0x51, 0x00, 
  0x00, 0x04, 0x8a, 0xba, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x70, 
  0x00, 0x00, 0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xfb, 0x2e, 0xff, 0xff, 0xff, 0xfc, 
  0x00, 0x00, 0x00, 0x01, 0x7e, 0xff, 0x70, 0x07, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x28, 0xcf, 0xff, 0xff, 0x90, 0x01, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x05, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0xdf, 0xff, 0xff, 0xfd, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x00, 0xaf, 0xff, 0xff, 0xf9, 
  0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x3f, 0xff, 0xff, 0xf2, 
  0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0x70, 0x00, 0x08, 0xff, 0xff, 0x50, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x00, 0x37, 0x72, 0x00, 
  0x00, 0x04, 0xff, 0xff, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0xdf, 0xec, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

lv_img_dsc_t fan_24 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 288,
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .data = fan_24_map,
};
