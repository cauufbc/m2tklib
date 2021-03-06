/*

  m2ghopenglcd.h
  
  m2tklib = Mini Interative Interface Toolkit Library
  
  Copyright (C) 2014  olikraus@gmail.com

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

  This is the "openGLCD" low level driver for M2tklib
  openGLCD project page: https://bitbucket.org/bperrybap/openglcd/wiki/Home
  
*/

#ifndef _M2GHGLCD_H
#define _M2GHGLCD_H



#ifdef __cplusplus
extern "C" {
#endif
  
extern uint8_t m2_is_glcd_init;
 
uint8_t m2_gh_glcd_y(uint8_t y);
uint8_t m2_gh_glcd_get_font_height(m2_gfx_arg_p  arg);
uint8_t m2_gh_glcd_get_font_corrcetion(m2_gfx_arg_p  arg);
void m2_gh_glcd_set_font(uint8_t font);
void m2_gh_glcd_draw_frame(uint8_t x0, uint8_t y0, uint8_t w, uint8_t h);
void m2_gh_glcd_draw_frame_shadow(uint8_t x0, uint8_t y0, uint8_t w, uint8_t h);
void m2_gh_glcd_draw_xorbox(uint8_t x0, uint8_t y0, uint8_t w, uint8_t h);
void m2_gh_glcd_draw_icon(uint8_t x0, uint8_t y0, uint8_t w, uint8_t h, uint8_t icon);
void m2_gh_glcd_draw_big_icon(uint8_t x0, uint8_t y0, uint8_t w, uint8_t h, uint8_t icon);

uint8_t m2_gh_glcd_get_user_font_height(m2_gfx_arg_p  arg);
uint8_t m2_gh_glcd_get_user_font_corrcetion(m2_gfx_arg_p  arg);
void m2_gh_glcd_set_user_font(uint8_t font);
uint8_t m2_gh_glcd_base(m2_gfx_arg_p  arg);

  
  
/*  
  fonts can be defined with m2_SetFont()
*/
uint8_t m2_gh_openglcd_bf(m2_gfx_arg_p arg);
uint8_t m2_gh_openglcd_ffs(m2_gfx_arg_p arg);
  
#ifdef __cplusplus
}
#endif
#endif
