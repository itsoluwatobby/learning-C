#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
  // char name[35];
  // printf("\nWhat's your name: ");
  // fgets(name, 35, stdin);
  // name[strlen(name) - 1] = '\0';

  // int number = 0;
  // int sum = 0;

  // while (strlen(name) == 0)
  // {
  //   printf("\nPlease enter your name: ");
  //   fgets(name, 35, stdin);
  //   name[strlen(name) - 1] = '\0';
  // }

  // do
  // {
  //   printf("\nEnter a number above 0: ");
  //   scanf("%d", &number);

  //   sum += number;

  // } while (number > 0);

  // printf("\nTotal number entered is %d", sum);

  // Nested loops
  int rows;
  int columns;
  char symbol;

  printf("\nEnter number of rows: ");
  scanf("%d", &rows);

  printf("\nEnter number of columns: ");
  scanf("%d", &columns);

  printf("\nEnter a symbol to use: ");
  scanf("%c", &symbol);
  scanf("%c");

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      printf("%c", symbol);
    }
    printf("\n");
  }

  return 0;
}