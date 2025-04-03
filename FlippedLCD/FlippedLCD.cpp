#include "FlippedLCD.h"

char lastFlippedText[9] = "";
byte A_flipped[8] = {
	0b10001,
	0b10001,
	0b10001,
	0b01110,
	0b01010,
	0b01010,
	0b00100,
	0b00000
};

byte B_flipped[8] = {
  B01111,
  B10001,
  B10001,
  B01111,
  B10001,
  B10001,
  B01111,
  B00000
};

byte C_flipped[8] = {
	0b11100,
	0b00010,
	0b00001,
	0b00001,
	0b00001,
	0b00010,
	0b11100,
	0b00000
};
byte D_flipped[8] = {
  B01111,  
  B10001,  
  B10001,  
  B10001,  
  B10001,  
  B10001,  
  B01111,  
  B00000   
};

byte E_flipped[8] = {
	0b11111,
	0b00001,
	0b00001,
	0b11111,
	0b00001,
	0b00001,
	0b11111,
	0b00000
};

byte F_flipped[8] = {
  0b00001,
	0b00001,
	0b00001,
	0b11111,
	0b00001,
	0b00001,
	0b11111,
	0b00000
};

byte G_flipped[8] = {
	0b11111,
	0b10001,
	0b11001,
	0b00001,
	0b00001,
	0b10001,
	0b11111,
	0b00000
};

byte H_flipped[8] = {
	0b10001,
	0b10001,
	0b10001,
	0b11111,
	0b10001,
	0b10001,
	0b10001,
	0b00000
};

byte I_flipped[8] = {
  B11111,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B11111,
  B00000
};

byte J_flipped[8] = {
	0b01000,
	0b10100,
	0b10100,
	0b00100,
	0b00100,
	0b00100,
	0b11111,
	0b00000
};

byte K_flipped[8] = {
  B10001,
  B01001,
  B00101,
  B00011,
  B00101,
  B01001,
  B10001,
  B00000
};

byte L_flipped[8] = {
	0b11111,
	0b00001,
	0b00001,
	0b00001,
	0b00001,
	0b00001,
	0b00001,
	0b00000
};

byte M_flipped[8] = {
	0b10101,
	0b10101,
	0b10101,
	0b10101,
	0b10101,
	0b10101,
	0b01110,
	0b00000
};

byte N_flipped[8] = {
  B10001,
  B10001,
  B10001,
  B11001,
  B10101,
  B10011,
  B10001,
  B00000
};

byte O_flipped[8] = {
  B01110,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B01110,
  B00000
};

byte P_flipped[8] = {
	0b00001,
	0b00001,
	0b00001,
	0b11111,
	0b10001,
	0b10001,
	0b11111,
	0b00000
};

byte Q_flipped[8] = {
	0b10110,
	0b01001,
	0b10101,
	0b10001,
	0b10001,
	0b10001,
	0b01110,
	0b00000
};

// R (flipped 180°)
byte R_flipped[8] = {

  B10001,
  B01001,
  B00101,
  B01111,
  B10001,
  B10001,
  B01111,
    B00000
};

byte S_flipped[8] = {
	0b01111,
	0b10000,
	0b10000,
	0b01110,
	0b00001,
	0b00001,
	0b11110,
	0b00000
};

byte T_flipped[8] = {
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B11111,
  B00000
};

byte U_flipped[8] = {
	0b01110,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b00000
};

byte V_flipped[8] = {
	0b00100,
	0b01010,
	0b01010,
	0b01010,
	0b10001,
	0b10001,
	0b10001,
	0b00000
};

byte W_flipped[8] = {
	0b01110,
	0b10101,
	0b10101,
	0b10101,
	0b10101,
	0b10101,
	0b10101,
	0b00000
};

byte X_flipped[8] = {
	0b10001,
	0b01010,
	0b01010,
	0b00100,
	0b01010,
	0b01010,
	0b10001,
	0b00000
};

byte Y_flipped[8] = {
	0b00100,
	0b00100,
	0b00100,
	0b00100,
	0b01010,
	0b10001,
	0b10001,
	0b00000
};

byte Z_flipped[8] = {
	0b11111,
	0b10000,
	0b01000,
	0b00100,
	0b00010,
	0b00001,
	0b11111,
	0b00000
};

byte zero_flipped[8] = {
	0b11111,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b10001,
	0b11111,
	0b00000
};

byte one_flipped[8] = {
	0b11111,
	0b00100,
	0b00100,
	0b00100,
	0b00101,
	0b00110,
	0b00100,
	0b00000
};

byte two_flipped[8] = {
	0b11111,
	0b00010,
	0b00100,
	0b01000,
	0b10000,
	0b10001,
	0b01110,
	0b00000
};

byte three_flipped[8] = {
	0b01111,
	0b10000,
	0b10000,
	0b01111,
	0b10000,
	0b10000,
	0b01111,
	0b00000
};

byte four_flipped[8] = {
	0b10000,
	0b10000,
	0b10000,
	0b11111,
	0b10010,
	0b10100,
	0b11000,
	0b00000
};

byte five_flipped[8] = {
	0b11111,
	0b10000,
	0b10000,
	0b11111,
	0b00001,
	0b00001,
	0b11111,
	0b00000
};

byte six_flipped[8] = {
	0b11111,
	0b10001,
	0b10001,
	0b11111,
	0b00001,
	0b00001,
	0b01111,
	0b00000
};

byte seven_flipped[8] = {
	0b00001,
	0b00010,
	0b00100,
	0b01000,
	0b10000,
	0b10000,
	0b11111,
	0b00000
};

byte eight_flipped[8] = {
	0b11111,
	0b10001,
	0b10001,
	0b11111,
	0b10001,
	0b10001,
	0b11111,
	0b00000
};

byte nine_flipped[8] = {
	0b10000,
	0b10000,
	0b10000,
	0b11111,
	0b10001,
	0b10001,
	0b11111,
	0b00000
};

byte colon_flipped[8] = {
	0b01000,
	0b01000,
	0b00000,
	0b00000,
	0b00000,
	0b01000,
	0b01000,
	0b00000
};

byte percent_flipped[8] = {
	0b10000,
	0b01011,
	0b01011,
	0b00100,
	0b11010,
	0b11010,
	0b00001,
	0b00000
};

byte hyphen_flipped[8] = {
	0b00000,
	0b00000,
	0b00000,
	0b11111,
	0b00000,
	0b00000,
	0b00000,
	0b00000
};

byte less_than_flipped[8] = {
	0b10000,
	0b01100,
	0b00010,
	0b00001,
	0b00010,
	0b01100,
	0b10000,
	0b00000
};

byte greater_than_flipped[8] = {
	0b00001,
	0b00110,
	0b01000,
	0b10000,
	0b01000,
	0b00110,
	0b00001,
	0b00000
};

byte cactus_flipped[8] = {
	0b00100,
	0b00100,
	0b00111,
	0b00101,
	0b11101,
	0b10100,
	0b00100,
	0b00000
};

byte water_flipped[8] = {
	0b01110,
	0b10001,
	0b10001,
	0b10001,
	0b01010,
	0b00100,
	0b00100,
	0b00000
};

// Default blank
byte blank_flipped[8] = { 0,0,0,0,0,0,0,0 };

void printFlipped(const char* text ,const int row, const int col) { //use pointer to find the current string
    char clipped[9] = ""; //the character register can hold 8 chars of space
    strncpy(clipped, text, 8); //copy string
    clipped[8] = '\0'; //and null (9)
  
   
  
    // Reverse the clipped string
    int len = strlen(clipped);
    for (int i = 0; i < len / 2; i++) {
      char temp = clipped[i];
      clipped[i] = clipped[len - 1 - i];
      clipped[len - 1 - i] = temp;
    }
  
     // Convert each char to uppercase
    for (int i = 0; i < len; i++) {
      clipped[i] = toupper(clipped[i]);
    }
  
    // Skip if the text hasn’t changed (caching to prevent flickering in loop function)
    if (strcmp(clipped, lastFlippedText) == 0) return; //compare string
    strcpy(lastFlippedText, clipped); //copy string
  
    // Load flipped characters into CGRAM
    for (int i = 0; i < len; i++) {
      lcd.createChar(i, getFlippedChar(clipped[i]));
    }
  
    // Display them
    lcd.clear();
    lcd.setCursor(col, row);
    for (int i = 0; i < len; i++) {
      lcd.write(byte(i));
    }
  }
  // Lookup helper
  byte* getFlippedChar(char c) {
    switch (c) {
      case 'A': return A_flipped;
      case 'B': return B_flipped;
      case 'C': return C_flipped;
      case 'D': return D_flipped;
      case 'E': return E_flipped;
      case 'F': return F_flipped;
      case 'G': return G_flipped;
      case 'H': return H_flipped;
      case 'I': return I_flipped;
      case 'J': return J_flipped;
      case 'K': return K_flipped;
      case 'L': return L_flipped;
      case 'M': return M_flipped;
      case 'N': return N_flipped;
      case 'O': return O_flipped;
      case 'P': return P_flipped;
      case 'Q': return Q_flipped;
      case 'R': return R_flipped;
      case 'S': return S_flipped;
      case 'T': return T_flipped;
      case 'U': return U_flipped;
      case 'V': return V_flipped;
      case 'W': return W_flipped;
      case 'X': return X_flipped;
      case 'Y': return Y_flipped;
      case 'Z': return Z_flipped;
      case '0': return zero_flipped;
      case '1': return one_flipped;
      case '2': return two_flipped;
      case '3': return three_flipped;
      case '4': return four_flipped;
      case '5': return five_flipped;
      case '6': return six_flipped;
      case '7': return seven_flipped;
      case '8': return eight_flipped;
      case '9': return nine_flipped;
      case ':': return colon_flipped;
      case '%': return percent_flipped;
      case '-': return hyphen_flipped;
      case ' ': return blank_flipped;
      case '>': return greater_than_flipped;
      case '<': return less_than_flipped;
      case '/': return cactus_flipped;
      case '|': return water_flipped;
      default: return blank_flipped;
    }
  }
