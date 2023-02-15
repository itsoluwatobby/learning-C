#include <stdio.h>
#include <stdbool.h>

int main(){

  //dealing with variables
  // format specifiers = %f(float), %s(string(char name[])), %c(character), %d(integer)
  int x;
  x= 5;
  int y = 75;

  int age = 21;
  float gpa = 2.05;
  char c = 'C';
  char name[] = "Bro"; //array of characters;

  double price = 50.21245456;
  //to display more character after your digits add 0.(the number digits to display), i.e= 0.15

  //signed and unsigned character
  //unsigned char = byte(0 to +255) %d or %c
  //unsigned char = 0 to +255

  //short h = 2 bytes (-32,768 to +32768)
  //unsigned short int = 0 to +65,535

  //int = 4 bytes (-2,147,483,647 to +2,147,483,647)
  //unsigned short int = 4 bytes (0 to +4,294,967,295) (to display; use %u)

  //long long int = 8 bytes (-9 quantillion to +9quantillion) (to display; use %lld)
  //unsigned long long int = 4 bytes (0 to +4,294,967,295) (to display; use %llu)

  bool e = true;

  char den = 105;
  unsigned char g = 255; 
  int l = -234;

  unsigned int k = 78545;

  long long int s = 985421256632548652;
  unsigned long long int t = 5421256638655521254U;

  printf("%0.12f\n", price);
  printf("%c\n", den);
  printf("%d\n", l);
  printf("%d\n", g);
  printf("%u\n", k);
  printf("%lld\n", s);
  printf("%llu\n", t);
  printf("%d", e); //1 = true and 0 = false

  //FORMAT SPECIFIER % = defines and formats a type of data to be displayed

  /*
    %c = character
    %f = float
    %d = integer
    %s = string (array of characters)
    %lf = double

    %.1 = decimal precision
    %1 = minimum field width
    %- = left align
  */

  float item1 = 5.75;
  float items2 = 10.00


  return 0;
}