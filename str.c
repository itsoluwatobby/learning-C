#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

  char string1[] = "Bro";
  char string2[] = "Code";

  //strlwr(string1);                             //converts string to lowercase
  //strupr(string1);                             //converts string to uppercase
  //strcat(string1, string2);                    //appends string2 to the end of string1
  //strncat(string1, string2, 2);                //appends n characters from string2 to string1
  //strcpy(string1, string2);                    //copy string2 to string1
  //strncpy(string1, string2, 2);                //copy n characters from string2 to string1

  //strset(string1, 'G');                        //sets all characters of a string to a given character
  //strnset(string1, 'x', 1);                    //sets first n character of a string to a given character
  //strrev(string1);                             //reverses a string

  //int result = strlen(string1);                                  //returns the length of a string
  // int result = strcmp(string1, string2);                       //string compare all characters
  // int result = strcmpi(string1, string1);                      //string compare all (ignore case)
  // int result = strncmp(string1, string2, 1);                   //string compare n characters
  // int result = strnicmp(string1, string1, 1);                  //string compare n characters (ignore case)

  printf("\n%d", result);
  result == 0 ? printf("\nThe strings are the same") : printf("\nThe strings are not the same");

  return 0;
}