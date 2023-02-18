#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

// int main(){

/*
char unit;
float temp;

printf("Is the temperature in (F) or (C)?: ");
scanf("%c", &unit);

unit = toupper(unit);

if(unit == 'C'){
  printf("\nEnter the temp in Celsius: ");
  scanf("%f", &temp);
  temp = (temp * 9 / 5 + 32);
  printf("\nThe temp in Fahrenheit is: %.1f", temp);
}
else if(unit == 'F'){
  printf("\nEnter the temp in Fahrenheit: ");
  scanf("%f", &temp);
  temp = ((temp - 32) * 5) / 9;
  printf("\nThe temp in Celsius is: %.1f", temp);
}
else{
  printf("\n%c is not a valid unit of measurement", unit);
}
*/

/*
  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter an operator (+ - * /): ");
  scanf("%c", &operator);

  printf("\nEnter the first input: ");
  scanf("%lf", &num1);

  printf("\nEnter the second input: ");
  scanf("%lf", &num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("\nThe total of %.1lf and %.1lf is: %.2lf", num1, num2, result);
    break;
  case '-':
    result = num1 - num2;
    printf("\nThe subtraction of %.1lf from %.1lf is: %.2lf", num1, num2, result);
    break;
  case '*':
    result = num1 * num2;
    printf("\nThe multiplication of %.1lf and %.1lf is: %.2lf", num1, num2, result);
    break;
  case '/':
    result = num1 / num2;
    printf("\nThe division of %.1lf and %.1lf is: %.2lf", num1, num2, result);
    break;
  default:
    printf("\nPlease enter a valid operator %c", operator);
  }
*/

/*// Logical operators
float temp = 25;
bool sunny = false;

if (!sunny)
{
  printf("\nNot sunny!");
}
else
{
  printf("\nIt's sunny outside!");
}
*/

// return 0;
//}

void birthday(char name[], int age)
{
  // FUNCTIONS
  printf("\nHappy birthday dear %s!", name);
  printf("\nYou are %d years old!", age);
}

int main()
{

  char name[35];
  int age;

  printf("\nEnter your name: ");
  fgets(name, 35, stdin);
  name[strlen(name) - 1] = '\0';

  printf("\nEnter your age: ");
  scanf("%d", &age);

  birthday(name, age);

  return 0;
}
