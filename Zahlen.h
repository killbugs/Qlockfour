/*
   Zahlen
*/

#ifndef ZAHLEN_H
#define ZAHLEN_H

// grosse Zahlen
const char ziffern[][7] = {
  { // 0
#ifdef NONE_TECHNICAL_ZERO
    0b00001110,
    0b00010001,
    0b00010001,
    0b00010001,
    0b00010001,
    0b00010001,
    0b00001110
#else
    0b00001110,
    0b00010001,
    0b00010011,
    0b00010101,
    0b00011001,
    0b00010001,
    0b00001110
#endif
  },
  { // 1
    0b00000100,
    0b00001100,
    0b00000100,
    0b00000100,
    0b00000100,
    0b00000100,
    0b00001110
  },
  { // 2
    0b00001110,
    0b00010001,
    0b00000001,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00011111
  },
  { // 3
    0b00011111,
    0b00000010,
    0b00000100,
    0b00000010,
    0b00000001,
    0b00010001,
    0b00001110
  },
  { // 4
    0b00000010,
    0b00000110,
    0b00001010,
    0b00010010,
    0b00011111,
    0b00000010,
    0b00000010
  },
  { // 5
    0b00011111,
    0b00010000,
    0b00011110,
    0b00000001,
    0b00000001,
    0b00010001,
    0b00001110
  },
  { // 6
    0b00000110,
    0b00001000,
    0b00010000,
    0b00011110,
    0b00010001,
    0b00010001,
    0b00001110
  },
  { // 7
    0b00011111,
    0b00000001,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00001000,
    0b00001000
  },
  { // 8
    0b00001110,
    0b00010001,
    0b00010001,
    0b00001110,
    0b00010001,
    0b00010001,
    0b00001110
  },
  { // 9
    0b00001110,
    0b00010001,
    0b00010001,
    0b00001111,
    0b00000001,
    0b00000010,
    0b00001100
  }
};

// kleine Zahlen
const char ziffernB[][5] PROGMEM = {
  { // 0
    0b00011110,
    0b00010010,
    0b00010010,
    0b00010010,
    0b00011110
  },
  { // 1
    0b00000100,
    0b00001100,
    0b00000100,
    0b00000100,
    0b00001110
  },
  { // 2
    0b00011110,
    0b00000010,
    0b00011110,
    0b00010000,
    0b00011110
  },
  { // 3
    0b00011110,
    0b00000010,
    0b00001110,
    0b00000010,
    0b00011110
  },
  { // 4
    0b00010010,
    0b00010010,
    0b00011110,
    0b00000010,
    0b00000010
  },
  { // 5
    0b00011110,
    0b00010000,
    0b00011110,
    0b00000010,
    0b00011110
  },
  { // 6
    0b00011110,
    0b00010000,
    0b00011110,
    0b00010010,
    0b00011110
  },
  { // 7
    0b00011110,
    0b00000010,
    0b00000100,
    0b00000100,
    0b00000100
  },
  { // 8
    0b00011110,
    0b00010010,
    0b00011110,
    0b00010010,
    0b00011110
  },
  { // 9
    0b00011110,
    0b00010010,
    0b00011110,
    0b00000010,
    0b00011110
  }
};

#endif

