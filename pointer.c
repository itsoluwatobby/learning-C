#include <stdio.h>

int main()
{
  int a = 10;
  int *pA = &a;

  printf("%d", pA);
  printf("\n%d", *pA + 1);

  return 0;
}