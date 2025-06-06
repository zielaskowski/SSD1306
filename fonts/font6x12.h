// Copyright (c) 2020 lynniemagoo and RinkyDink Electronics
// https://github.com/lynniemagoo/oled-font-pack
#ifndef FONT6x12_H
#define FONT6x12_H
#include <stdint.h>
#include <avr/pgmspace.h>

#define FONT_WIDTH 6
#define FONT_HEIGHT 16 // must be multiple of 8 and less 64
#define FONT font6x12

const uint16_t FONT[][FONT_WIDTH] PROGMEM = 
{
 {0x000,0x000,0x000,0x000,0x000,0x000},  // <space>
 {0x000,0x000,0x2fc,0x000,0x000,0x000},  // !
 {0x000,0x00c,0x002,0x00c,0x002,0x000},  // "
 {0x090,0x3d0,0x0bc,0x3d0,0x0bc,0x090},  // #
 {0x318,0x224,0x7fe,0x244,0x18c,0x000},  // $
 {0x018,0x324,0x0d8,0x1b0,0x24c,0x180},  // %
 {0x1c0,0x238,0x2e4,0x138,0x2e0,0x200},  // &
 {0x008,0x006,0x000,0x000,0x000,0x000},  // '
 {0x000,0x000,0x000,0x1f8,0x204,0x402},  // (
 {0x000,0x402,0x204,0x1f8,0x000,0x000},  // )
 {0x090,0x060,0x1f8,0x060,0x090,0x000},  // *
 {0x020,0x020,0x1fc,0x020,0x020,0x000},  // +
 {0x800,0x600,0x000,0x000,0x000,0x000},  // ,
 {0x020,0x020,0x020,0x020,0x020,0x000},  // -
 {0x000,0x200,0x000,0x000,0x000,0x000},  // .
 {0x400,0x380,0x060,0x01c,0x002,0x000},  // /
 {0x1f8,0x204,0x204,0x204,0x1f8,0x000},  // 0
 {0x000,0x208,0x3fc,0x200,0x000,0x000},  // 1
 {0x318,0x284,0x244,0x224,0x218,0x000},  // 2
 {0x108,0x204,0x224,0x224,0x1d8,0x000},  // 3
 {0x040,0x0b0,0x088,0x3fc,0x280,0x000},  // 4
 {0x13c,0x224,0x224,0x224,0x1c4,0x000},  // 5
 {0x1f8,0x224,0x224,0x22c,0x1c0,0x000},  // 6
 {0x00c,0x004,0x3e4,0x01c,0x004,0x000},  // 7
 {0x1d8,0x224,0x224,0x224,0x1d8,0x000},  // 8
 {0x038,0x344,0x244,0x244,0x1f8,0x000},  // 9
 {0x000,0x000,0x210,0x000,0x000,0x000},  // :
 {0x000,0x000,0x620,0x000,0x000,0x000},  // ;
 {0x000,0x020,0x050,0x088,0x104,0x202},  // <
 {0x090,0x090,0x090,0x090,0x090,0x000},  // =
 {0x000,0x202,0x104,0x088,0x050,0x020},  // >
 {0x018,0x004,0x2c4,0x024,0x018,0x000},  // ?
 {0x1f8,0x204,0x2e4,0x294,0x2f8,0x000},  // @
 {0x200,0x3e0,0x09c,0x0f0,0x380,0x200},  // A
 {0x204,0x3fc,0x224,0x224,0x1d8,0x000},  // B
 {0x1f8,0x204,0x204,0x204,0x10c,0x000},  // C
 {0x204,0x3fc,0x204,0x204,0x1f8,0x000},  // D
 {0x204,0x3fc,0x224,0x274,0x30c,0x000},  // E
 {0x204,0x3fc,0x224,0x074,0x00c,0x000},  // F
 {0x0f0,0x108,0x204,0x244,0x1cc,0x040},  // G
 {0x204,0x3fc,0x020,0x020,0x3fc,0x204},  // H
 {0x204,0x204,0x3fc,0x204,0x204,0x000},  // I
 {0x600,0x404,0x404,0x3fc,0x004,0x004},  // J
 {0x204,0x3fc,0x224,0x0d0,0x30c,0x204},  // K
 {0x204,0x3fc,0x204,0x200,0x200,0x300},  // L
 {0x3fc,0x03c,0x3c0,0x03c,0x3fc,0x000},  // M
 {0x204,0x3fc,0x230,0x0c4,0x3fc,0x004},  // N
 {0x1f8,0x204,0x204,0x204,0x1f8,0x000},  // O
 {0x204,0x3fc,0x224,0x024,0x018,0x000},  // P
 {0x1f8,0x284,0x284,0x704,0x5f8,0x000},  // Q
 {0x204,0x3fc,0x224,0x064,0x398,0x200},  // R
 {0x318,0x224,0x224,0x244,0x18c,0x000},  // S
 {0x00c,0x204,0x3fc,0x204,0x00c,0x000},  // T
 {0x004,0x1fc,0x200,0x200,0x1fc,0x004},  // U
 {0x004,0x07c,0x380,0x0e0,0x01c,0x004},  // V
 {0x01c,0x3e0,0x03c,0x3e0,0x01c,0x000},  // W
 {0x204,0x39c,0x060,0x39c,0x204,0x000},  // X
 {0x004,0x21c,0x3e0,0x21c,0x004,0x000},  // Y
 {0x20c,0x384,0x264,0x21c,0x304,0x000},  // Z
 {0x000,0x000,0x7fe,0x402,0x402,0x000},  // [
 {0x000,0x00e,0x030,0x1c0,0x200,0x000},  // <backslash>
 {0x000,0x402,0x402,0x7fe,0x000,0x000},  // ]
 {0x000,0x004,0x002,0x004,0x000,0x000},  // ^
 {0x800,0x800,0x800,0x800,0x800,0x800},  // _
 {0x000,0x000,0x002,0x000,0x000,0x000},  // `
 {0x000,0x140,0x2a0,0x2a0,0x3c0,0x200},  // a
 {0x004,0x3fc,0x220,0x220,0x1c0,0x000},  // b
 {0x000,0x1c0,0x220,0x220,0x260,0x000},  // c
 {0x000,0x1c0,0x220,0x224,0x3fc,0x200},  // d
 {0x000,0x1c0,0x2a0,0x2a0,0x2c0,0x000},  // e
 {0x000,0x220,0x3f8,0x224,0x224,0x004},  // f
 {0x000,0x740,0xaa0,0xaa0,0xa60,0x420},  // g
 {0x204,0x3fc,0x220,0x020,0x3c0,0x200},  // h
 {0x000,0x220,0x3e4,0x200,0x000,0x000},  // i
 {0x800,0x800,0x820,0x7e4,0x000,0x000},  // j
 {0x204,0x3fc,0x280,0x0e0,0x320,0x220},  // k
 {0x204,0x204,0x3fc,0x200,0x200,0x000},  // l
 {0x3e0,0x020,0x3e0,0x020,0x3c0,0x000},  // m
 {0x220,0x3e0,0x220,0x020,0x3c0,0x200},  // n
 {0x000,0x1c0,0x220,0x220,0x1c0,0x000},  // o
 {0x820,0xfe0,0xa20,0x220,0x1c0,0x000},  // p
 {0x000,0x1c0,0x220,0xa20,0xfe0,0x800},  // q
 {0x220,0x3e0,0x240,0x020,0x020,0x000},  // r
 {0x000,0x260,0x2a0,0x2a0,0x320,0x000},  // s
 {0x000,0x020,0x1f8,0x220,0x200,0x000},  // t
 {0x020,0x1e0,0x200,0x220,0x3e0,0x200},  // u
 {0x020,0x0e0,0x320,0x180,0x060,0x020},  // v
 {0x060,0x380,0x0e0,0x380,0x060,0x000},  // w
 {0x220,0x360,0x080,0x360,0x220,0x000},  // x
 {0x820,0x8e0,0x720,0x180,0x060,0x020},  // y
 {0x000,0x220,0x3a0,0x260,0x220,0x000},  // z
 {0x000,0x000,0x020,0x7de,0x402,0x000},  // {
 {0x000,0x000,0x000,0xfff,0x000,0x000},  // |
 {0x000,0x402,0x7de,0x020,0x000,0x000},  // }
 {0x002,0x001,0x002,0x004,0x004,0x002}  // ~
};
#endif