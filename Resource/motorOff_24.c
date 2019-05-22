#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t motorOff_24_map[] = {
  0xfa, 0xae, 0x0b, 0xff, 	/*Color of index 0*/
  0xae, 0xaa, 0xa9, 0xff, 	/*Color of index 1*/
  0xe1, 0xb1, 0x59, 0xff, 	/*Color of index 2*/
  0xfc, 0xed, 0xd3, 0xff, 	/*Color of index 3*/

  0x55, 0x55, 0x60, 0x09, 0x55, 0x55, 
  0x55, 0x55, 0x00, 0x00, 0x55, 0x55, 
  0x55, 0x54, 0x00, 0x00, 0x15, 0x55, 
  0x55, 0x50, 0xa0, 0x0a, 0x05, 0x55, 
  0x55, 0x50, 0xf8, 0x2f, 0x05, 0x55, 
  0x55, 0x60, 0xfc, 0x3f, 0x09, 0x55, 
  0xaa, 0x80, 0xfc, 0x3f, 0x02, 0xaa, 
  0x00, 0x00, 0xfe, 0xbb, 0x00, 0x00, 
  0xaa, 0x80, 0xff, 0xfb, 0x02, 0xaa, 
  0x55, 0x60, 0xeb, 0xeb, 0x09, 0x55, 
  0x55, 0x50, 0xe3, 0xc3, 0x85, 0x55, 
  0x55, 0x50, 0xe3, 0xc3, 0x85, 0x55, 
  0x55, 0x54, 0x00, 0x00, 0x15, 0x55, 
  0x55, 0x55, 0x00, 0x00, 0x55, 0x55, 
  0x55, 0x55, 0x60, 0x09, 0x55, 0x55, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x58, 0x02, 0x54, 0x00, 0x50, 0x01, 
  0x62, 0x58, 0x94, 0x95, 0x52, 0x55, 
  0x41, 0x54, 0x14, 0x95, 0x52, 0x55, 
  0x49, 0x56, 0x14, 0x2a, 0x50, 0xa9, 
  0x49, 0x56, 0x14, 0x2a, 0x50, 0xa9, 
  0x41, 0x54, 0x14, 0x95, 0x52, 0x55, 
  0x60, 0xa0, 0x94, 0x95, 0x52, 0x55, 
  0x5a, 0xa9, 0x56, 0x95, 0x5a, 0x55, 
};

lv_img_dsc_t motorOff_24 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 160,
  .header.cf = LV_IMG_CF_INDEXED_2BIT,
  .data = motorOff_24_map,
};
