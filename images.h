#ifndef IMAGES_H
#define IMAGES_H

enum {
	ICON_CONNECTED = 0,
	ICON_DISCONNECTED,
	ICON_REMOTEXT,
	ICON_RAIN,
	ICON_FLOW,
	ICON_PSWITCH,
	ICON_SOIL,
	ICON_RAINDELAY,
	ICON_ETHER_CONNECTED,
	ICON_ETHER_DISCONNECTED,
	ICON_PSWITCH_2,	
	NUM_CUSTOM_ICONS
};

#if defined(ESP8266)

enum {
	LCD_CURSOR_REMOTEXT = 11,// 
	LCD_CURSOR_RAINDELAY,// 12
	LCD_CURSOR_SENSOR1,	 // 13
	LCD_CURSOR_SENSOR2,	 // 14
	LCD_CURSOR_NETWORK	 // 15
};

#define WiFi_Logo_width 60
#define WiFi_Logo_height 36
const char WiFi_Logo_image[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0x03, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 0x83, 0x01, 0x80, 0xFF, 0xFF, 0xFF,
  0x01, 0x00, 0x07, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x0C, 0x00,
  0xC0, 0xFF, 0xFF, 0x7C, 0x00, 0x60, 0x0C, 0x00, 0xC0, 0x31, 0x46, 0x7C,
  0xFC, 0x77, 0x08, 0x00, 0xE0, 0x23, 0xC6, 0x3C, 0xFC, 0x67, 0x18, 0x00,
  0xE0, 0x23, 0xE4, 0x3F, 0x1C, 0x00, 0x18, 0x00, 0xE0, 0x23, 0x60, 0x3C,
  0x1C, 0x70, 0x18, 0x00, 0xE0, 0x03, 0x60, 0x3C, 0x1C, 0x70, 0x18, 0x00,
  0xE0, 0x07, 0x60, 0x3C, 0xFC, 0x73, 0x18, 0x00, 0xE0, 0x87, 0x70, 0x3C,
  0xFC, 0x73, 0x18, 0x00, 0xE0, 0x87, 0x70, 0x3C, 0x1C, 0x70, 0x18, 0x00,
  0xE0, 0x87, 0x70, 0x3C, 0x1C, 0x70, 0x18, 0x00, 0xE0, 0x8F, 0x71, 0x3C,
  0x1C, 0x70, 0x18, 0x00, 0xC0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x08, 0x00,
  0xC0, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x0C, 0x00, 0x80, 0xFF, 0xFF, 0x1F,
  0x00, 0x00, 0x06, 0x00, 0x80, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x07, 0x00,
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xF8, 0xFF, 0xFF,
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x01, 0x00, 0x00,
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF,
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };

const char _iconimage_connected[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0x80,
  0xA0, 0xA0, 0xA8, 0xA8,
  0xAA, 0xAA, 0x00, 0x00,
  };

const char _iconimage_disconnected[] PROGMEM = {
  0x00, 0x00, 0x00, 0x11,
  0x0A, 0x04, 0x8A, 0x91,
  0xA0, 0xA0, 0xA8, 0xA8,
  0xAA, 0xAA, 0x00, 0x00,
  };

const char _iconimage_remotext[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x41,
  0x62, 0x54, 0x48, 0x44,
  0x22, 0x1F, 0x00, 0x00,
  };
  
const char _iconimage_rain[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00,
  0x18, 0x24, 0x3E, 0x00,
  0x2A, 0x2A, 0x00, 0x2A,
  0x2A, 0x00, 0x00, 0x00,
  };  

const char _iconimage_flow[] PROGMEM = {
  0x00, 0x00, 0x0F, 0x0F,
  0x03, 0x0F, 0x0F, 0x03,
  0x1B, 0x18, 0x18, 0x18,
  0x78, 0x78, 0x00, 0x00,
  };  

const char _iconimage_pswitch[] PROGMEM = {
  0x00, 0x00, 0x1E, 0x12,
  0x12, 0x12, 0x1E, 0x02,
  0x22, 0x32, 0x22, 0x20,
  0x20, 0x70, 0x00, 0x00,
  };  

// todo
const char _iconimage_soil[] PROGMEM = {
	0x00, 0x00, 0x00, 0x0E,
	0x01, 0x0E, 0x10, 0x0F,
	0x00, 0x60, 0x90, 0x90,
	0x60, 0x00, 0x00, 0x00,
  };
  
const char _iconimage_raindelay[] PROGMEM = {
	0x00, 0x00, 0x00, 0x1C,
	0x22, 0x49, 0x49, 0x49,
	0x59, 0x41, 0x41, 0x41,
	0x22, 0x1C, 0x00, 0x00,
  };    

const char _iconimage_ether_connected[] PROGMEM = {
  0x00, 0x00, 0x00, 0x38,
  0x28, 0x38, 0x10, 0x10,
  0xFE, 0x44, 0x44, 0xEE,
  0xAA, 0xEE, 0x00, 0x00,
  };
  
const char _iconimage_ether_disconnected[] PROGMEM = {
  0x00, 0x00, 0x11, 0x0A,
  0x04, 0xEA, 0xB1, 0xE0,
  0x40, 0xFE, 0x44, 0xEE,
  0xAA, 0xEE, 0x00, 0x00,
  };

#elif defined(ARDUINO)

enum {
	LCD_CURSOR_SENSOR2 = 11,
	LCD_CURSOR_REMOTEXT, // 12
	LCD_CURSOR_RAINDELAY,// 13
	LCD_CURSOR_SENSOR1,  // 14
	LCD_CURSOR_NETWORK   // 15
};

const char _iconimage_connected[] PROGMEM = {
	B00000,
	B00000,
	B00000,
	B00001,
	B00001,
	B00101,
	B00101,
	B10101
};

const char _iconimage_disconnected[] PROGMEM = {
	B00000,
	B10100,
	B01000,
	B10101,
	B00001,
	B00101,
	B00101,
	B10101
};

const char _iconimage_remotext[] PROGMEM = {
	B00000,
	B00000,
	B00000,
	B10001,
	B01011,
	B00101,
	B01001,
	B11110
};

const char _iconimage_rain[] PROGMEM = {
	B00000,
	B00000,
	B00110,
	B01001,
	B11111,
	B00000,
	B10101,
	B10101
};

const char _iconimage_flow[] PROGMEM = {
	B00000,
	B00000,
	B00000,
	B11010,
	B10010,
	B11010,
	B10011,
	B00000
};

const char _iconimage_pswitch[] PROGMEM = {
  B00000,
  B11000,
  B10100,
  B11000,
  B10010,
  B10110,
  B00010,
  B00111
};

// todo
const char _iconimage_soil[] PROGMEM = {
  B01100,
  B10000,
  B01000,
  B00100,
  B11000,
  B00010,
  B00101,
  B00010
};  

const char _iconimage_raindelay[] PROGMEM = {
  B00000,
  B01110,
  B10101,
  B10101,
  B10111,
  B10001,
  B10001,
  B01110
};  

#else 

enum {
	LCD_CURSOR_REMOTEXT = 11,// 
	LCD_CURSOR_RAINDELAY,// 12
	LCD_CURSOR_SENSOR1,	 // 13
	LCD_CURSOR_SENSOR2,	 // 14
	LCD_CURSOR_NETWORK	 // 15
};

#endif

#endif

