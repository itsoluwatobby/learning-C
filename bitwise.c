#include <stdio.h>

int main()
{
  // BITWISE OPERATORS: special operators used in bit level programming(knowing binary is important for this topic).
  //************ OPERATORS **********************
  /*
    & = AND
    | = OR
    ^ = XOR (exclusive OR) (only one of the digit is not equal to zero i.e 1,1 = 0; 1,0=1; 0,1=1; 0,0=0)
    << == left shift   
    >> == right shift 
  */

  int x = 6;  // 6 = 00000110
  int y = 12; //12 = 00001100
  int z = 0;  //  AND(4 = 00000100) OR(14 = 00001110) XOR(10 = 00001010)
  //left shift only once(1) 6 = 12 (i.e ===  6 = 00000110, so left shift << = 00001100)
  //right shift 12 = 6 (i.e ===  12 = 000001100, so right shift << = 00000110)

  z = x & y;
  printf("\nAND: %d", z);

  z = x | y;
  printf("\nOR: %d", z);

  z = x ^ y;
  printf("\nXOR: %d", z);

  z = x << 1;
  printf("\nLEFT_SHIFT: %d", z);

  z = y >> 1;
  printf("\nRIGHT_SHIFT: %d", z);

  return 0;
}
