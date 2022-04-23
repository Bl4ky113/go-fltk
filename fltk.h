#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

  extern int go_fltk_run();
  extern int go_fltk_lock();
  extern void go_fltk_unlock();

  extern void go_fltk_init_styles(void);
  extern int go_fltk_set_scheme(const char *scheme);
  extern void go_fltk_set_background_color(unsigned char r, unsigned char g, unsigned char b);
  extern void go_fltk_set_background2_color(unsigned char r, unsigned char g, unsigned char b);
  extern void go_fltk_set_boxtype(int i, int x, int y, int w, int h);
  extern void go_fltk_set_foreground_color(unsigned char r, unsigned char g, unsigned char b);
  extern void go_fltk_set_color(unsigned int col, unsigned char r, unsigned char g, unsigned char b);
  extern void go_fltk_get_color(unsigned int col, unsigned char *r, unsigned char *g, unsigned char *b);
  extern unsigned go_fltk_get_colorindex(unsigned int col);

  extern void go_fltk_set_font(int font, const char* family);
  extern void go_fltk_set_font2(int font, int font2);

  extern void go_fltk_awake_null_message();
  extern int go_fltk_awake(uintptr_t id);

  extern void go_fltk_add_timeout(double t, uintptr_t id);
  extern void go_fltk_repeat_timeout(double t, uintptr_t id);

  extern void go_fltk_copy(const char* data, int len, int destination);
  extern void go_fltk_dnd();

  extern void go_fltk_screen_work_area(int *x, int *y, int *w, int *h, int n);
  extern void go_fltk_screen_dpi(float *w, float *h, int n);
  extern int go_fltk_screen_count();
  extern float go_fltk_screen_scale(int screenNum);
  extern void go_fltk_set_screen_scale(int screenNum, float scale);
  extern void go_fltk_set_keyboard_screen_scaling(int value);

#ifdef __cplusplus
}
#endif
