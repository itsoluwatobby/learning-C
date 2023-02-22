#include <stdio.h>
#include <ctype.h>

int main()
{

  char questions[][100] = {
      "1. What year did the C language debut?: ",
      "2. Who is credited with creating C?: ",
      "3. What is the predecessor of C?: "};
  char options[][100] = {
      "A. 1969",
      "B. 1972",
      "C. 1975",
      "D. 1999",
      "A. Dennis Ritchie",
      "B. Nikola Tesla",
      "C. John Carmack",
      "D. Doc Brown",
      "A. Objective C",
      "B. B",
      "C. C++",
      "D. C#",
  };
  char answer[3] = {'B', 'A', 'B'};
  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

  char guess;
  int score = 0;

  printf("\nQUIZ GAME\n");

  for (int i = 0; i < numberOfQuestions; i++)
  {
    printf("\n************************\n");
    printf("%s\n", questions[i]);
    printf("************************\n\n");

    for (int j = (i * 4); j < (i * 4) + 4; j++)
    {
      printf("%s\n\n", options[j]);
    }
    printf("guess: ");
    scanf("%c", &guess);
    scanf("%c");

    guess = toupper(guess);

    if (guess == answer[i])
    {
      printf("CORRECT!\n");
      score++;
    }
    else
    {
      printf("\n\nWRONG!!\n");
      printf("The answer is: %c\n", answer[i]);
    }
  }

  printf("\n************************\n");
  printf("Your total score is: %d/%d", score, numberOfQuestions);
  printf("\n************************\n");

  return 0;
}
