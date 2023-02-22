#include <stdio.h>
#include <string.h>

int main()
{

  // continue and break
  //  for(int i=1; i<=20; i++){
  //    if(i == 5) continue;
  //    if(i == 17) break;
  //    printf("%d\n", i);
  //  }

  //  ARRAYS
  // double prices[5] = {5.0, 10.0, 25.5, 20.4, 12.4};
  // printf("%.2lf", prices[0]);

  // Array and loops
  // double prices[] = {5.0, 20.4, 12.4, 45.2};
  // for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
  // {
  //   printf("\n£%.2lf", prices[i]);
  // }

  // 2D Arrays = an array, where each element is an entire array. It's useful if you need a matrix, grid or table of data
  // int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
  // int rows = sizeof(numbers) / sizeof(numbers[0]);
  // int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
  // printf("\nrows: %d", rows);
  // printf("\ncolumns: %d\n", columns);
  // for (int i = 0; i < rows; i++)
  // {
  //   for (int j = 0; j < columns; j++)
  //   {
  //     printf("%d ", numbers[i][j]);
  //   }
  //   printf("\n");
  // }

  // String arrays
  // char cars[][10] = {"Mustang", "Corvette", "Camaro"};
  // strcpy(cars[0], "Ferrari");
  // for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
  // {
  //   printf("\n%s", cars[i]);
  // }

  char x[15] = "water";
  char y[15] = "melon";
  char temp[15];

  strcpy(temp, x);
  strcpy(x, y);
  strcpy(y, temp);

  printf("temp = %s\n", temp);
  printf("x = %s\n", x);
  printf("y = %s\n", y);

  return 0;
}