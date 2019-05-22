#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t heatend_20_12_map[] = {
  0x00, 0x00, 0x8f, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x8f, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xbb, 0xbb, 0xdf, 0xeb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc8, 0x88, 0xcf, 0xff, 
  0xbb, 0xbb, 0xdf, 0xeb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
  0x00, 0x00, 0x8f, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x05, 0xbb, 0xdf, 0xeb, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x6f, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x04, 0xff, 0xf5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x2c, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

lv_img_dsc_t heatend_20_12 = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 12,
  .data_size = 120,
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .data = heatend_20_12_map,
};
