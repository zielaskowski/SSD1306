# OLED on SSD1306

Library to display text on OLED with ssd1306 chip, using
[AVRLibc](https://onlinedocs.microchip.com/oxy/GUID-317042D4-BCCE-4065-BB05-AC4312DBC2C4-en-US-2/index.html).
Assumption is to minimaze memory footprint with only text display.
The only fancy feature is 'invert' method
(no graphic, single font, no buffer, no scrolling).

Inspiration come from fact that Adafruit_SSD1306 with
Arduino library takes ~21254 bytes

## usage

Just set display size and choose font in `ssd1306.h`.
Communication protocol is expected to be a class exposing
void init(), error write() and void stop() methods, with error defined as this:

```[cpp]
typedef enum : uint8_t {
    NO_ERR = 0,
    DEV_ERR = 1,
    COM_ERR = 2,
  } error;
```

DEV_ERR will stop any further communication attempts.
When COM_ERR is detected, the lib will re-send data (10 times max).
protocol() expose all methods from communication class if present.
This protocol works "out of the box": [I2C](https:/github.com/zielaskowski/i2c)

## notes

- tested on I2C 32x128 display, and there is no plan to use other protocols.

- included folder with differnt size fonts,
from [https://github.com/lynniemagoo/oled-font-pack](https://github.com/lynniemagoo/oled-font-pack)

- fonts are memory thirsty, for example, very small fonts (5x8 pixels)
require 5x95 = 475B. Average size 6x16 would take 6x2x95=1.1kB.
Maximum size fonts of 19x32 pixels take 19x8x95=9kB
(which is one third of FLASH memory!).

- fonts fit into FLASH memory with PROGMEM using pgmspace.h library.

- set page hight to fit font height, then write column by column:
each font character height is then page height and then column by column
written directly to display memory
