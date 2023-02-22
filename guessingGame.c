#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  const int MIN = 1;
  const int MAX = 100;

  int guess;
  int answer;
  int guesses = 10;

  // uses the current time as a seed to generate random numbers
  srand(time(0));

  // generates a random number between min and max
  answer = (rand() % MAX) + MIN;

  do
  {
    guesses--;
    printf("\nEnter a guess: ");
    scanf("%d", &guess);

    if (guess > answer)
    {
      !(guesses == 0) && printf("Too high");
      (guesses != 0) && ((guesses == 1) ? printf("\n%d guess left\n", guesses) : printf("\n%d guesses left\n", guesses));
      (guesses == 0) && printf("\nYou failed!!. Try again");
      (guesses == 0) && printf("\nThe answer is: %d", answer);
    }
    else if (guess < answer)
    {
      !(guesses == 0) && printf("Too low");
      (guesses != 0) && ((guesses == 1) ? printf("\n%d guess left\n", guesses) : printf("\n%d guesses left\n", guesses));
      (guesses == 0) && printf("\nYou failed!!. Try again");
      (guesses == 0) && printf("\nThe answer is: %d", answer);
    }
    else if (guess == answer)
    {
      int chances = 10 - guesses;
      printf("\nCORRECT!!");
      printf("\nguesses: %d", chances);
    }
  } while (guess != answer && guesses != 0);

  return 0;
}
