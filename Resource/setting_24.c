#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t setting_24_map[] = {
  0x00, 0x00, 0x00, 0x29, 0xe4, 0x00, 0x00, 0x4e, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xfe, 0x50, 0x05, 0xef, 0xff, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x03, 0x13, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x31, 0x30, 
  0x2f, 0xff, 0xff, 0xff, 0xfe, 0x85, 0x58, 0xef, 0xff, 0xff, 0xff, 0xf2, 
  0x9f, 0xff, 0xff, 0xff, 0x90, 0x00, 0x00, 0x09, 0xff, 0xff, 0xff, 0xf9, 
  0xef, 0xff, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x9f, 0xff, 0xff, 0xfe, 
  0x4e, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xe4, 
  0x05, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0xff, 0xff, 0x50, 
  0x00, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0xff, 0x00, 
  0x00, 0xff, 0xff, 0x60, 0x00, 0x00, 0x00, 0x00, 0x05, 0xff, 0xff, 0x00, 
  0x05, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0xff, 0xff, 0x50, 
  0x4e, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xe4, 
  0xef, 0xff, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x9f, 0xff, 0xff, 0xfe, 
  0x9f, 0xff, 0xff, 0xff, 0x90, 0x00, 0x00, 0x09, 0xff, 0xff, 0xff, 0xf9, 
  0x2f, 0xff, 0xff, 0xff, 0xfe, 0x86, 0x68, 0xef, 0xff, 0xff, 0xff, 0xf2, 
  0x03, 0x13, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x31, 0x30, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xfe, 0x50, 0x05, 0xef, 0xff, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x29, 0xe4, 0x00, 0x00, 0x4e, 0x92, 0x00, 0x00, 0x00, 
};

lv_img_dsc_t setting_24 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 288,
  .header.cf = LV_IMG_CF_ALPHA_4BIT,
  .data = setting_24_map,
};
