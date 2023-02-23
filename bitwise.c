#include <stdio.h>

void printAge(int *age){
  printf("\nYou are %d years old", *age);
}

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
/*
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
*/
  
  /*
    memory = an array of bytes within RAM(street)
    memory block = a single unit (byte) within memory, used to hold some value(person)
    memory address = the address of where a memory block is located(house address)
  */
/*
 char a = 'X';
 short b = 'Y';
 int c = 'Z';
 double d[2];
 float f;
 double e = 'Z';

 printf("\nA is: %d bytes", sizeof(a));
 printf("\nB is: %d bytes", sizeof(b));
 printf("\nC is: %d bytes", sizeof(c));
 printf("\nD is: %d bytes", sizeof(d));
 printf("\nE is: %d bytes", sizeof(e));
 printf("\nF is: %d bytes", sizeof(f));

//format specifier for address is p
 printf("\n%p", &a);
 printf("\n%p", &b);
 printf("\n%p", &c);
 printf("\n%p", &d);
 printf("\n%p", &e);
 printf("\n%p", &f);
*/
  
  /*
    POINTER = a "variable-like" reference that holds a memory address to another variable, 
              and some tasks are performed more easily with pointers.
              * = indirection operator (value at address)
  */

  int age = 21;
  int *pAge = &age;

  //always assign NULL as the value of a pointed the=at has no value
  //I.E int pNome = NULL;
  //pNome = &age;

  printf("address of age: %p\n", &age);
  printf("value of pAge: %p\n", pAge);

  printf("\nsize of age: %d bytes\n", sizeof(age));
  printf("size of pAge: %d bytes\n", sizeof(pAge));

  printf("\nvalue of age: %d\n", age);
  printf("value at stored address: %d\n", *pAge);

  printAge(pAge);
  
  return 0;
}
