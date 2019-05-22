#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t custom_24_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0xfb, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0d, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x4d, 0xff, 0xff, 0xf5, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x4d, 0x40, 0x6e, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xdf, 0xfb, 0x20, 0x8f, 0x30, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0xff, 0xf9, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xaf, 0xff, 0xff, 0xff, 0x60, 0x04, 0x77, 0x77, 0x77, 0x62, 
  0x00, 0x03, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x4f, 0xff, 0xff, 0xff, 0xfe, 
  0x00, 0x0d, 0xff, 0xff, 0xff, 0xf3, 0x00, 0x4f, 0xff, 0xff, 0xff, 0xfd, 
  0x00, 0x6f, 0xff, 0xff, 0xff, 0x90, 0x00, 0x03, 0x55, 0x55, 0x55, 0x41, 
  0x01, 0xef, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x09, 0xff, 0xff, 0xff, 0xf6, 0x00, 0x7b, 0xcc, 0xcc, 0xcc, 0xcc, 0xb5, 
  0x3f, 0xff, 0xff, 0xff, 0xd0, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xaf, 0xff, 0xff, 0xff, 0x30, 0x00, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xfa, 
  0xcf, 0xff, 0xff, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xef, 0xff, 0xff, 0xf1, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
  0xff, 0xff, 0xff, 0x60, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 
  0xff, 0xff, 0xe4, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfb, 0x10, 0x00, 0x02, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xa5, 
  0xdc, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

lv_img_dsc_t custom_24 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 288,
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .data = custom_24_map,
};