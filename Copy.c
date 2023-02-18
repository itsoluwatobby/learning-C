#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// #include <string.h>

// int main()
// {

//   // char name[35];
//   // int age;

//   // printf("What's your name?\n");
//   // printf("Name: ");
//   // scanf("%s", &name);// for inputs that does not include white spaces
//   // fgets(name, 35, stdin);// for inputs with white spaces and this includes a default \n formatter
//   // name[strlen(name)-1] = '\0';// this is used with fgets to remove the \n formatter

//   // printf("\nWhat's your age?\n");
//   // printf("Age: ");
//   // scanf("%d", &age);

//   // printf("Your name is %s \n", name);
//   // printf("and you're %d years old", age);

//   // double A = sqrt(9);
//   // double B = pow(2, 4);
//   // int C = round(3.14);
//   // int D = ceil(3.14);
//   // int E = floor(3.14);
//   // double F = fabs(-100);// absolute number
//   // double G = log(3);
//   // double H = sin(45);
//   // double I = cos(45);
//   // double J = tan(45);

//   // const double PI = 3.14159;
//   // double radius;
//   // double circumference;
//   // double area;

//   // printf("Enter radius of the circle: ");
//   // scanf("%lf", &radius);

//   // circumference = 2 * PI * radius;
//   // area = PI * radius * radius;

//   // printf("Circumference: %lf", circumference);
//   // printf("\nArea: %lf", area);

//   //FIND THE HYPOTENUS OF A TRIANGLE
//   double A;
//   double B;
//   double C;

//   printf("Enter side A: ");
//   scanf("%lf", &A);
//   printf("Enter side B: ");
//   scanf("%lf", &B);

//   C = sqrt(A*A + B*B);
//   printf("The hypothenus is: %lf", C);

//   return 0;
// }

int main()
{

  int grade;

  printf("\nEnter a letter grade: ");
  scanf("%d", &grade);

  switch (grade)
  {
  case 'A':
    printf("Perfect!\n");
    break;
  case 'B':
    printf("You did good!\n");
    break;
  case 'C':
    printf("You did okay!\n");
    break;
  case 'D':
    printf("You tried!\n");
    break;
  case 'F':
    printf("Failed!\n");
    break;
  default:
    printf("Please enter a letter grade");
  }

  return 0;
}
