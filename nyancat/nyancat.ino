/*
  LiquidCrystal Library - Custom Characters
 
 Demonstrates how to add custom characters on an LCD  display.  
 The LiquidCrystal library works with all LCD displays that are 
 compatible with the  Hitachi HD44780 driver. There are many of 
 them out there, and you can usually tell them by the 16-pin interface.
 
 This sketch prints "I <heart> Arduino!" and a little dancing man
 to the LCD.
 
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K potentiometer:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * 10K poterntiometer on pin A0
 
 created21 Mar 2011
 by Tom Igoe
 Based on Adafruit's example at
 https://github.com/adafruit/SPI_VFD/blob/master/examples/createChar/createChar.pde
 
 This example code is in the public domain.
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 
 Also useful:
 http://icontexto.com/charactercreator/
 
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4,5, 6, 7); // freetronics

// make some custom characters:
byte f0c0[8] = {
  0b00001,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00110
};

byte f0c4[8] = {
  0b01010,
  0b10110,
  0b11010,
  0b00010,
  0b00010,
  0b00001,
  0b00010,
  0b00011
};

byte f0c1[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte f0c5[8] = {
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b11111,
  0b10010,
  0b11100
};

byte f0c2[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b11000,
  0b10110
};

byte f0c6[8] = {
  0b00110,
  0b00100,
  0b00000,
  0b00100,
  0b10011,
  0b11111,
  0b00010,
  0b00001
};

byte f0c3[8] = {
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10010,
  0b10110,
  0b11010
};

byte f0c7[8] = {
  0b11001,
  0b10001,
  0b00001,
  0b10010,
  0b00010,
  0b11100,
  0b01010,
  0b10110
};

// frame 1

byte f1c0[8] = {
  0b00001,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b11110
};

byte f1c4[8] = {
  0b10010,
  0b01110,
  0b00010,
  0b00010,
  0b00010,
  0b00011,
  0b00100,
  0b00111
};

byte f1c1[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001
};

byte f1c5[8] = {
  0b00010,
  0b00010,
  0b00010,
  0b00001,
  0b00001,
  0b11111,
  0b01010,
  0b01100
};

byte f1c2[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b01110
};

byte f1c6[8] = {
  0b01101,
  0b01001,
  0b00000,
  0b01000,
  0b10111,
  0b11111,
  0b00010,
  0b00001
};

byte f1c3[8] = {
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b10000,
  0b10100,
  0b01100,
  0b11100
};

byte f1c7[8] = {
  0b10010,
  0b00010,
  0b00010,
  0b10100,
  0b00100,
  0b11000,
  0b01010,
  0b10110
};

// frame 2

byte f2c0[8] = {
  0b00001,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b01110
};

byte f2c4[8] = {
  0b10010,
  0b11110,
  0b00010,
  0b00010,
  0b00010,
  0b00001,
  0b00010,
  0b00011
};

byte f2c1[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00001,
  0b00001,
  0b00010
};

byte f2c5[8] = {
  0b00010,
  0b00010,
  0b00010,
  0b00001,
  0b00000,
  0b11111,
  0b10010,
  0b11100
};

byte f2c2[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b01111,
  0b01101
};

byte f2c6[8] = {
  0b01001,
  0b00000,
  0b01000,
  0b00111,
  0b11111,
  0b11111,
  0b00010,
  0b00001
};

byte f2c3[8] = {
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b10100,
  0b01100,
  0b11100,
  0b10010
};

byte f2c7[8] = {
  0b00010,
  0b00010,
  0b10100,
  0b00100,
  0b11000,
  0b10000,
  0b01010,
  0b10110
};

// frame 

byte f3c0[8] = {
  0b00001,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b00010,
  0b11010,
  0b10110
};

byte f3c4[8] = {
  0b10010,
  0b01110,
  0b00010,
  0b00010,
  0b00010,
  0b00001,
  0b00010,
  0b00011
};

byte f3c1[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001
};

byte f3c5[8] = {
  0b00001,
  0b00001,
  0b00001,
  0b00000,
  0b00000,
  0b11111,
  0b01001,
  0b11110
};

byte f3c2[8] = {
  0b11111,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b11000,
  0b10110,
  0b00001
};

byte f3c6[8] = {
  0b00110,
  0b00100,
  0b00100,
  0b10011,
  0b01111,
  0b11111,
  0b00001,
  0b00000
};

byte f3c3[8] = {
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b10010,
  0b10110,
  0b11110,
  0b00001
};

byte f3c7[8] = {
  0b11001,
  0b10001,
  0b01010,
  0b10010,
  0b11100,
  0b10000,
  0b01001,
  0b11110
};

void frame0() {
  lcd.createChar(0, f0c0);
  lcd.createChar(1, f0c1);
  lcd.createChar(2, f0c2);
  lcd.createChar(3, f0c3);
  lcd.falsecreateChar(4, f0c4);
  lcd.createChar(5, f0c5);
  lcd.createChar(6, f0c6);
  lcd.createChar(7, f0c7);
}

void frame1() {
  lcd.createChar(0, f1c0);
  lcd.createChar(1, f1c1);
  lcd.createChar(2, f1c2);
  lcd.createChar(3, f1c3);
  lcd.createChar(4, f1c4);
  lcd.createChar(5, f1c5);
  lcd.createChar(6, f1c6);
  lcd.createChar(7, f1c7);
}

void frame2() {
  lcd.createChar(0, f2c0);
  lcd.createChar(1, f2c1);
  lcd.createChar(2, f2c2);
  lcd.createChar(3, f2c3);
  lcd.createChar(4, f2c4);
  lcd.createChar(5, f2c5);
  lcd.createChar(6, f2c6);
  lcd.createChar(7, f2c7);
}

void frame3() {
  lcd.createChar(0, f3c0);
  lcd.createChar(1, f3c1);
  lcd.createChar(2, f3c2);
  lcd.createChar(3, f3c3);
  lcd.createChar(4, f3c4);
  lcd.createChar(5, f3c5);
  lcd.createChar(6, f3c6);
  lcd.createChar(7, f3c7);
}


int count = 0;
bool scroll = true;

void setup() {
  frame0();
  
  lcd.begin(16, 2);
  // fill left 4 x 2 matrix with custom chars
  lcd.setCursor(0, 0);
  lcd.write(uint8_t(0));
  lcd.write(1);
  lcd.write(2);
  lcd.write(3);
  lcd.setCursor(0, 1);
  lcd.write(4);
  lcd.write(5);
  lcd.write(6);
  lcd.write(7);
  
  // hide display
  int i;
  for (i = 0; i < 4 ; i++) {
    if (scroll) 
      lcd.scrollDisplayLeft();
  }
}


void loop() {
  delay(230);
  count++;
  int frame;
  frame = count % 4;
  switch (frame) {
    case 0:
      frame0(); 
      break;
    case 1:
      frame1();
      break;
    case 2:
      frame2();
      break;
    case 3:
      frame3();
      break;
  }
  if (count %3 == 0 && scroll) {
    lcd.scrollDisplayRight();
  }  
}



