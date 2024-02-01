#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void printSpaces(int);
void printStars(int);
void printTreeRow(int, int);
void printTree(int, int);
void printTrunk(int, int, int);

// function prints number of spaces
void printSpaces(int numSpaces)
{
  for (int i = 0; i < numSpaces; i++)
  {
    printf(" ");
  }
}

// function prints number of stars
void printStars(int numStars)
{
  for (int i = 0; i < numStars; i++)
  {
    printf("*");
  }
}

// function prints the upper part of the tree
void printTreeRow(int height, int row)
{
  int numSpaces = height - row;
  int numStars = 1 + (row * 2);

  printSpaces(numSpaces);
  printStars(numStars);
  printSpaces(numSpaces);
}

// function that prints the numbers of print 
void printTree(int height, int count)
{
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < count; j++)
    {
      printTreeRow(height, i);
    }
    printf("\n");
  }
}

// function that prints the trunk of the christmas tree
void printTrunk(int height, int count, int trunk)
{
  for (int i = 0; i < trunk; i++)
  {
    for (int j = 0; j < count; j++)
    {
      printSpaces(height);
      printf("*");
      printSpaces(height);
    }
    printf("\n");
  }
}

int main()
{
  /* This is the simple version for printing christmas trees
  int height = 5;
  int trunk = 2;
  int count = 4;
  int stars, space;

  printf("Christmas Tree:");
  printf("\n");
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < count; j++)
    {
      space = height - i;
      for (int l = 0; l < space; l++)
        printf("%c", ' ');
      // printf(" Code works until here\n");

      stars = 1 + (i * 2);
      for (int k = 0; k < stars; k++)
      {
        printf("%c", '*');
      }
      for (int m = 0; m < space; m++)
      {
        printf("%c", ' ');
      }
    }
    printf("\n");
  }

  // for the trunk
  for (int ii = 0; ii < trunk; ii++)
  {
    for (int jj = 0; jj < count; jj++)
    {
      for (int kk = 0; kk < height; kk++)
      {
        printf("%c", ' ');
      }
      printf("*");
      for (int ll = 0; ll < height; ll++)
      {
        printf("%c", ' ');
      }
    }
    printf("\n");
  }
*/

  int height = 5;
  int trunk = 2;
  int count = 4;

  printf("Christmas Trees:\n");

  // Print the tree part
  printTree(height, count);

  // Print the trunk part
  printTrunk(height, count, trunk);

  return 0;
}
