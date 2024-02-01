#include <stdio.h>

int main()
{
  int korkeus = 0;
  // user puts the height of the christmas tree
  printf("Anna Korkeus:\n");
  scanf("%d", &korkeus);

  // loop for christmas tree upper part pattern
  for (int i = 0; i <= korkeus; i++)
  {
    int tahtiMäärä = (i * 2) - 1; // no of asterisks to be printed
    int tilaMärää = korkeus - i;  // no of spaces to be printed

    // prints spaces each line to create pyramid shape
    for (int j = 0; j < tilaMärää; j++)
      printf(" ");

    // prints asterisks for the line
    for (int k = 0; k < tahtiMäärä; k++)
      printf("*");

    printf("\n");
  }

  // loop for the trunk of the christmas tree
  for (int i = 0; i < 2; i++)
  {
    // prints spaces before the last two lines of asterisks
    for (int j = 1; j < korkeus; j++)
      printf(" ");
    printf("*\n"); // prints two line asterisks
  }
  return 0;
}
