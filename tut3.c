#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

// double square(double x)
// {
//   return x * x;
// }

// int findMax(int x, int y)
// {
//   return x > y ? x : y;
// }

void hello(char[], int); //function prototype

int main()
{
  // double x = square(3.14);
  // printf("\nResult is: %.2lf", x);

  // TERNARY OPERATOR
  // int max = findMax(305, 14);
  // printf("\nThe maximum number is: %d", max);

  // function prototype
  // it is a function declaration w/o a body before the main()
  // it ensures that calls to a function are made with correct argument

  char name[] = "Sam";
  int age = 30;

  hello(name, age);

  return 0;
}

void hello(char name[], int age)
{
  printf("\nHello %s", name);
  printf("\nYou are %d years old", age);
}
