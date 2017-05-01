/*
 *
 * ARIAL16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : NUMERAL16x7.h
 * Date                : 05.06.2016
 * Font size in bytes  : 5927
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 97
 * Font used chars     : 65
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
#if defined (ESP8266)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif

#ifndef NUMERAL16x7_H
#define NUMERAL16x7_H

#define NUMERAL16x7_WIDTH 10
#define NUMERAL16x7_HEIGHT 16

static const uint8_t NUMERAL16x7[] PROGMEM = {
    0x17, 0x27, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x41, // char count
    
    // char widths
    0x07, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 
    0x00, 0x06, 0x02, 0x04, 0x02, 0x04, 0x07, 0x04, 0x07, 0x07, 
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02, 0x02, 0x07, 0x07, 
    0x07, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x02, 0x08, 0x08, 0x08, 0x09, 0x09, 0x08, 0x08, 0x09, 
    0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x08, 0x08, 0x03, 
    0x04, 0x03, 0x05, 0x09, 0x02, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0xFE, 0xFE, 0xC7, 0xC7, // 33
    0x0F, 0x0F, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x06, 0x03, 0x00, 0x00, // 39
    0xF0, 0x0E, 0x01, 0x0F, 0x70, 0x80, // 40
    0x01, 0x0E, 0xF0, 0x80, 0x70, 0x0F, // 41
    0x80, 0x80, 0xF0, 0xF0, 0x80, 0x80, 0x01, 0x01, 0x0F, 0x0F, 0x01, 0x01, // 43
    0x00, 0x00, 0x60, 0x30, // 44
    0x80, 0x80, 0x80, 0x80, 0x01, 0x01, 0x01, 0x01, // 45
    0x00, 0x00, 0x30, 0x30, // 46
    0x00, 0x00, 0xF8, 0x07, 0xE0, 0x1F, 0x00, 0x00, // 47
    0xFE, 0xFF, 0x07, 0x03, 0x07, 0xFF, 0xFE, 0x7F, 0xFF, 0xE0, 0xC0, 0xE0, 0xFF, 0x7F, // 48
    0x0C, 0x0E, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, // 49
    0x1E, 0x1F, 0x07, 0x03, 0x87, 0xFF, 0xFE, 0xF8, 0xFC, 0xCE, 0xC7, 0xC3, 0xC1, 0xC0, // 50
    0x1E, 0x1F, 0x87, 0x83, 0xC7, 0xFF, 0x7E, 0x78, 0xF8, 0xE1, 0xC1, 0xE3, 0xFF, 0x7E, // 51
    0xF0, 0xF8, 0x1C, 0x0E, 0xFF, 0xFF, 0x00, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x03, // 52
    0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0x83, 0x78, 0xF8, 0xE0, 0xC0, 0xE1, 0xFF, 0x7F, // 53
    0xFE, 0xFF, 0x87, 0x83, 0x87, 0x9F, 0x1E, 0x7F, 0xFF, 0xE3, 0xC1, 0xE3, 0xFF, 0x7F, // 54
    0x03, 0x03, 0x03, 0x83, 0xC3, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, // 55
    0x7E, 0xFF, 0xC7, 0x83, 0xC7, 0xFF, 0x7E, 0x7E, 0xFF, 0xE3, 0xC1, 0xE3, 0xFF, 0x7E, // 56
    0x7E, 0xFF, 0xC7, 0x83, 0xC7, 0xFF, 0xFE, 0x78, 0xF8, 0xE1, 0xC1, 0xE1, 0xFF, 0x7F, // 57
    0x60, 0x60, 0x0C, 0x0C, // 58
    0x60, 0x60, 0x1C, 0x0C, // 59
    0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x80, 0x80, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x03, 0x03, // 60
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, // 61
    0x80, 0x80, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x03, 0x03, 0x1F, 0x0F, 0x07, 0x03, 0x01, // 62
    0xFC, 0xFE, 0xC3, 0xC3, 0xC3, 0xC3, 0xFE, 0xFC, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, // 65
    0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x3E, 0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x3F, 0x1F, // 66
    0xFE, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x0F, 0x0E, 0x1F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x1C, // 67
    0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0xFE, 0xFC, 0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x1F, 0x0F, // 68
    0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x03, 0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, // 69
    0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x03, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xFE, 0xFF, 0x03, 0x03, 0x83, 0x83, 0x8F, 0x8E, 0x1F, 0x3F, 0x30, 0x30, 0x31, 0x31, 0x3F, 0x1F, // 71
    0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, // 72
    0xFF, 0xFF, 0x3F, 0x3F, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1E, 0x3E, 0x30, 0x30, 0x30, 0x30, 0x3F, 0x1F, // 74
    0xFF, 0xFF, 0xE0, 0xF0, 0xF8, 0x9C, 0x0F, 0x07, 0x3F, 0x3F, 0x00, 0x00, 0x01, 0x03, 0x3F, 0x3E, // 75
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, // 76
    0xFF, 0xFF, 0x0E, 0x1C, 0x38, 0x1C, 0x0E, 0xFF, 0xFF, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F, // 77
    0xFF, 0xFF, 0x0F, 0x3C, 0xF0, 0xC0, 0x00, 0xFF, 0xFF, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0x3F, // 78
    0xFE, 0xFF, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFE, 0x1F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x3F, 0x1F, // 79
    0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xFE, 0xFF, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFE, 0x00, 0x1F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x0F, 0x3F, 0x38, // 81
    0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0x7F, 0x3E, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0x01, 0x3F, 0x3E, // 82
    0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x80, 0x00, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3F, 0x1F, // 83
    0x03, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, // 84
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x3F, 0x1F, // 85
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0x07, 0x0E, 0x1C, 0x38, 0x1C, 0x0E, 0x07, 0x03, // 86
    0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x3F, 0x3F, 0x1C, 0x0E, 0x07, 0x0E, 0x1C, 0x3F, 0x3F, // 87
    0x1F, 0x3F, 0xF0, 0xE0, 0xC0, 0xE0, 0xF0, 0x3F, 0x1F, 0x3E, 0x3F, 0x03, 0x01, 0x00, 0x01, 0x03, 0x3F, 0x3E, // 88
    0x3F, 0x7F, 0xE0, 0xC0, 0xC0, 0xE0, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0x00, 0x00, 0x00, // 89
    0x03, 0x83, 0xC3, 0xE3, 0x73, 0x3B, 0x1F, 0x0F, 0x3F, 0x3F, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, // 90
    0xFF, 0x01, 0x01, 0xFF, 0x80, 0x80, // 91
    0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, // 92
    0x01, 0x01, 0xFF, 0x80, 0x80, 0xFF, // 93
    0x0C, 0x06, 0x03, 0x06, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x03, 0x06, 0x00, 0x00 // 96
    
};

#endif

