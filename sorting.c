#include <stdio.h>
#include <string.h>

// void sort(char[], int);
// void printArray(char[], int);
/*
struct Player
{
  char name[25];
  int score;
};
*/

//typedef char user[25];

typedef struct {
  char name[25];
  char password[12];
  int id;
} User;

int main()
{
  // Sorting the element of an araay
  // int array[] = {9, 5, 8, 2, 1, 0, 6, 3, 7, 4};
  //   char array[] = {'F', 'A', 'D', 'B', 'C', 'E'};
  //   int size = sizeof(array) / sizeof(array[0]);
  //   sort(array, size);
  //   printArray(array, size);

  /*STRUCT = collection of related members (variables).
              They can be of different data types listed under one name in a block of memory
              VERY SIMILAR to classes in other languages but no methods.
  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "John");
  player1.score = 4;

  strcpy(player2.name, "Code");
  player2.score = 5;

  printf("Player1 name is: %s\t and score is: %d\n", player1.name, player1.score);
  printf("Player2 name is: %s\t and score is: %d\n", player2.name, player2.score);
  */

  //typedef = reserved keyword that gives an existing datatype a nickname
  //user user1 = "Bro";

  User user1 = {"Bro", "password", 158845};
  User user2 = {"Code", "password", 12545};

  printf("User1 with ID: %d\t your name is: %s\t and password is: %d\n", user1.id, user1.name, user1.password);
  printf("User2 with ID: %d\t your name is: %s\t and password is: %d\n", user1.id, user2.name, user2.password);


  return 0;
}

// void sort(char array[], int size)
// {
//   int temp;
//   for (int i = 0; i < size - 1; i++)
//   {
//     for (int j = 0; j < size - i - 1; j++)
//     {
//       if (array[j] > array[j + 1])
//       {
//         temp = array[j];
//         array[j] = array[j + 1];
//         array[j + 1] = temp;
//       }
//     }
//   }
// }

// void printArray(char array[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     printf("%c, ", array[i]);
//   }
// }