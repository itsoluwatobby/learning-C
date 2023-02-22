#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
struct Student
{
  char name[25];
  float gpa;
};

int main()
{
  struct Student student1 = {"Sam", 4.52};
  struct Student student2 = {"Dave", 4.02};
  struct Student student3 = {"Code", 3.22};
  struct Student student4 = {"Bro", 5.00};

  struct Student students[] = {student1, student2, student3, student4};
  int size = sizeof(students) / sizeof(students[0]);

  printf("Student Names and Grade Point Average:\n");

  for (int i = 0; i < size; i++)
  {
    printf("%-12s\t%.2f\n", students[i].name, students[i].gpa);
  }

  return 0;
}
*/
/*
enum Day
{
  Sun = 1,
  Mon = 2,
  Tue = 3,
  Wed = 4,
  Thu = 5,
  Fri = 6,
  Sat = 7
};
*/

int main()
{
  // enums
  // enum Day today = Sun;
  // (today == Sun || today == Sat) ? printf("Its weekend, Let's party") : printf("Work starts");

  // pseudo random numbers
  // srand = s=seed, rand=random
  srand(time(0));

  int number1 = (rand() % 6) + 1;
  int number2 = (rand() % 6) + 1;
  int number3 = (rand() % 6) + 1;

  printf("%d\t", number1);
  printf("%d\t", number2);
  printf("%d\t", number3);

  return 0;
}
