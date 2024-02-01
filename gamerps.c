#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

  int yourGuess;
  int Oponent;

  printf("Lets play Rock Paper Scissor Show!\n");
  printf("Enter 1 for Rock, 2 for Paper and 3 for Scissor:\n");
  scanf("%d", &yourGuess);
  srand(time(NULL));

  Oponent = (rand() % 3) + 1;

  switch (yourGuess)
  {
  case 1:
    printf("You chose Rock\n");
    break;
  case 2:
    printf("You chose Paper\n");
    break;
  case 3:
    printf("You chose Scissor\n");
    break;
  default:
    printf("Invalid guess\n");
  }

  switch (Oponent)
  {
  case 1:
    printf("Oponent chose Rock\n");
    break;
  case 2:
    printf("Oponent chose Paper\n");
    break;
  case 3:
    printf("Oponent chose Scissor\n");
    break;
  }

  if (yourGuess == Oponent)
  {
    printf("Its a tie\n");
  }
  else if ((yourGuess == 1 && Oponent == 3) ||
           (yourGuess == 2 && Oponent == 2) ||
           (yourGuess == 3 && Oponent == 1))
  {
    printf("You win!\n");
  }
  else
    printf("Oponent won!\n");

  return 0;
}
