#include <stdio.h>
#include <stdlib.h>

#define PLAYER_X 1
#define PLAYER_O 2
#define BOARD_SIZE 3

void displayBoard(char board[3][3]);
int checkWin(char board[3][3]);
int checkDraw(char board[3][3]);
void clearConsole();

// Function to display Tic Tac Toe Board
void displayBoard(char board[3][3])
{
  printf("Welcome to Tic Tac Toe Game!");
  printf("\n");
  printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
  printf("-------------\n");
  printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
  printf("-------------\n");
  printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
  printf("-------------\n");
}

// function to check for a win
int checkWin(char board[3][3])
{
  // check rows, columns, and diagonals
  for (int i = 0; i < 3; i++)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
      return 1; // checks win in a row
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
      return 1; // checks win in a column
  }
  // checks win in diagonals
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    return 1; // win in the main diagonal

  if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
    return 1; // checks win in the other diagonal

  return 0; // no win
}

// function to check if the game is  draw

int checkDraw(char board[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (board[i][j] == ' ')
        return 0; // checks if there  is an empty space, game is not draw
    }
  }
  return 1; // all spaces are filled, game is a draw
}

// clears the console
void clearConsole()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}

int main()
{
  char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
  // int currentPlayer = 1; // players 1 starts
  int currentPlayer = PLAYER_X;
  int row, column, move;

  do
  {
    displayBoard(board); // that displays board

    printf("Player %d, Enter your move (1-9): ", currentPlayer);

    /**
     * NOTE: When the user inputs string, the scanf() returns 0 and program always goes inside if without a break
     * TODO: Find a way to break this infinite loop. For now simply put break to mitigate infinite loop...
     */
    if (scanf("%d", &move) != 1)
    {
      printf("Invalid input! Please enter a number.\n");
      clearConsole();
      break;
    }

    // validate the move
    row = (move - 1) / 3;
    column = (move - 1) % 3;

    if (move < 1 || move > 9 || board[row][column] != ' ')
    {
      printf("Invalid move. Try again. \n");
      clearConsole();
      continue;
    }

    // make the move
    board[row][column] = (currentPlayer == PLAYER_X) ? 'X' : 'O';

    // check for a win or draw
    if (checkWin(board))
    {
      displayBoard(board);
      printf("Player %d wins!\n", currentPlayer);
      break;
    }
    else if (checkDraw(board))
    {
      displayBoard(board);
      printf("It´s a draw!\n");
      break;
    }
    // switch to the next player
    currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
    clearConsole();
  } while (1);
  return 0;
}
