

/*
 *
 * FONT14
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : FONT14.h
 * Date                : 22.08.2015
 * Font size in bytes  : 7002
 * Font width          : 10
 * Font height         : 18
 * Font first char     : 48
 * Font last char      : 96
 * Font used chars     : 48
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef FONT14_H
#define FONT14_H

#define FONT14_WIDTH 10
#define FONT14_HEIGHT 18

static uint8_t FONT14[] PROGMEM = {
    0x1B, 0x5A, // size
    0x0A, // width
    0x12, // height
    0x30, // first char
    0x30, // char count
    
    // char widths
    0x09, 0x05, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
    0x01, 0x03, 0x0A, 0x09, 0x0A, 0x09, 0x12, 0x09, 0x09, 0x09, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x03, 0x09, 0x09, 0x09, 0x0B, 
    0x09, 0x09, 0x09, 0x0B, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0B, 
    0x09, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x02, 
    
    // font data
    0xF8, 0xFE, 0xFF, 0x07, 0x07, 0x07, 0xFF, 0xFE, 0xF8, 0x07, 0x1F, 0x3F, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x1C, 0x1E, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x0C, 0x0E, 0x0F, 0x07, 0x87, 0xC7, 0xFF, 0xFE, 0x7C, 0x38, 0x3C, 0x3E, 0x3F, 0x3F, 0x3B, 0x39, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x0C, 0x0E, 0x0F, 0x07, 0xE7, 0xE7, 0xFF, 0xFE, 0x9C, 0x0C, 0x1C, 0x3C, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0xE0, 0xF0, 0xF8, 0x1C, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x3F, 0x3F, 0x3F, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x7F, 0x7F, 0x7F, 0x77, 0x77, 0xF7, 0xF7, 0xE7, 0xC7, 0x0C, 0x1C, 0x3C, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0xFC, 0xFE, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xC7, 0x86, 0x0F, 0x1F, 0x3F, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x07, 0x07, 0x87, 0xC7, 0xE7, 0xF7, 0x7F, 0x3F, 0x1F, 0x00, 0x3F, 0x3F, 0x3F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0xFC, 0xFE, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xFE, 0xFC, 0x0F, 0x1F, 0x3F, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0x7C, 0xFE, 0xFF, 0xC7, 0xC7, 0xC7, 0xFF, 0xFE, 0xFC, 0x18, 0x38, 0x39, 0x39, 0x39, 0x39, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0x38, 0x0E, 0x00, // 58
    0x38, 0x38, 0x38, 0x38, 0xB8, 0xF8, 0x40, 0x40, 0x00, // 59
    0x40, 0xE0, 0xF0, 0xF8, 0xFC, 0xFE, 0xFF, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0xE0, 0xE0, 0xE0, 0xFF, 0xFE, 0xFC, 0xF8, 0xF0, 0xE0, 0x40, 0x00, 0x00, 0x00, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x0C, 0x0E, 0x0F, 0x87, 0xC7, 0xE7, 0xFF, 0x7F, 0x3E, 0x00, 0x00, 0x00, 0x3B, 0x3B, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0xC0, 0xF0, 0x78, 0x1C, 0x8E, 0xE6, 0x73, 0x1B, 0x1B, 0x1B, 0xF3, 0xFB, 0xFE, 0x0E, 0x1C, 0xF8, 0xF0, 0x00, 0x0F, 0x3F, 0xF0, 0xC0, 0x8F, 0x9F, 0x30, 0x30, 0x30, 0x1C, 0x3F, 0x3F, 0x30, 0x98, 0x9C, 0xCF, 0xC3, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x40, 0x40, 0x00, 0x00, // 64
    0xF8, 0xFC, 0xFE, 0x0F, 0x0F, 0x0F, 0xFE, 0xFC, 0xF8, 0x3F, 0x3F, 0x3F, 0x07, 0x07, 0x07, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xFF, 0xBE, 0x1C, 0x3F, 0x3F, 0x3F, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0xFC, 0xFE, 0xFF, 0x0F, 0x07, 0x07, 0x0F, 0x0E, 0x0C, 0x0F, 0x1F, 0x3F, 0x3C, 0x38, 0x38, 0x3C, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x0F, 0xFF, 0xFE, 0xFC, 0x3F, 0x3F, 0x3F, 0x38, 0x38, 0x3C, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0x3F, 0x3F, 0x3F, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xFC, 0xFE, 0xFF, 0x0F, 0x07, 0xC7, 0xCF, 0xCE, 0xCC, 0x0F, 0x1F, 0x3F, 0x3C, 0x38, 0x39, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x0F, 0x1F, 0x3F, 0x3C, 0x38, 0x3C, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 74
    0xFF, 0xFF, 0xFF, 0xE0, 0xF0, 0xF8, 0xBF, 0x1F, 0x0F, 0x3F, 0x3F, 0x3F, 0x00, 0x01, 0x03, 0x3F, 0x3F, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0xFF, 0xFF, 0xFF, 0x1E, 0x3C, 0x78, 0x3C, 0x1E, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0xFF, 0xFF, 0xFF, 0x7E, 0xF8, 0xE0, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x00, 0x01, 0x07, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0xFC, 0xFE, 0xFF, 0x07, 0x07, 0x07, 0xFF, 0xFE, 0xFC, 0x0F, 0x1F, 0x3F, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0xFF, 0xFF, 0xFF, 0xC7, 0xC7, 0xEF, 0xFF, 0xFE, 0x7C, 0x3F, 0x3F, 0x3F, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xFC, 0xFE, 0xFF, 0x07, 0x87, 0x87, 0xFF, 0xFE, 0xFC, 0x00, 0x00, 0x0F, 0x1F, 0x3F, 0x38, 0x39, 0x3B, 0x37, 0x0F, 0x1F, 0x3C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 81
    0xFF, 0xFF, 0xFF, 0xC7, 0xC7, 0xEF, 0xFF, 0xFE, 0x7C, 0x3F, 0x3F, 0x3F, 0x01, 0x03, 0x07, 0x3F, 0x3E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0x3C, 0x7E, 0xFF, 0xE7, 0xE7, 0xE7, 0xEF, 0xCF, 0x8E, 0x0C, 0x1C, 0x3C, 0x38, 0x38, 0x38, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x0F, 0x1F, 0x3F, 0x3C, 0x38, 0x3C, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x03, 0x07, 0x0F, 0x1E, 0x3C, 0x1E, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x80, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x3F, 0x3F, 0x3F, 0x1E, 0x0F, 0x07, 0x0F, 0x1E, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x0F, 0x1F, 0xBF, 0xF8, 0xF0, 0xF8, 0xBF, 0x1F, 0x0F, 0x3E, 0x3F, 0x3F, 0x01, 0x00, 0x01, 0x3F, 0x3F, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x1F, 0x3F, 0x7F, 0xF0, 0xE0, 0xF0, 0x7F, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x07, 0x07, 0x87, 0xC7, 0xE7, 0xF7, 0x7F, 0x3F, 0x1F, 0x3E, 0x3F, 0x3F, 0x3B, 0x39, 0x38, 0x38, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0x00, 0x00, 0x00, // 91
    0x00, 0x00, 0x00, // 92
    0x00, 0x00, 0x00, // 93
    0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 95
    
};

#endif