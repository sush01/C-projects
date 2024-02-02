# This file contains projects done during the c programming training.
## List  of  Programs:

1. Christmas tree program.
* This program generates ASCII art representation of a Christmas tree based on user input for the height of the tree.

2. Rock Paper Scissor Game.
* This program is a simple implementation of Rock Paper Scissors game.   

3. Tic Tac Toe.
* This program is an implementation of Tic Tac Toe game. Two players take turns to make a move on a 3*3 grid, aiming to align three of their marks(X or O) horizontally, vertically or diagonally.

4. Word Guessing game.
* This program resembles the classic Hangman game. You guess the word that program has randomly selected form the list.

### Detailed description on the each program.

### Christmas tree program.(kuu.c)
#### Implementation Details
* The program prompts the user to enter th height of the christmas tree. 

* It uses two loops: one for the upper part of the tree, creating a pyramid pattern with spaces and asterisks, and another for the trunk.

* The number of spaces(tilamäärä) and asterisks(tähtimäärä) are calculated.

* This program prints one christmas tree where the height of tree is users input and trunk is give. 

* The program uses for loop to form  prints space and asterisk accordingly to print pyramid shape of upper part. Same logic is used to print trunk of the tree.

### Christmas tree program.(kuusimetsa.c)
#### Implementation Details

* This program provides an enhanced and flexible version for printing Christmas trees using functions to handle the generation of spaces, stars, and individual tree rows. 

* It allows for easy customization of the tree height, trunk size, and the number of trees to be printed.

* The program is written in two ways: one is using for loop and other with different functions for each operation. 

* The program defines seperate functions( printSpaces, printStars, printTreeRow, printTree, printTrunk)for different aspects of tree printing to enhance flexibility.

* The printTreeRow function prints a single row of the tree based on the specified height and current row.

* The printTree function prints the entire tree, utilizing the printTreeRow function.

* The printTrunk function prints the trunk of the tree based on the specified trunk size.

* The main function initializes the parameters (height, trunk, count) and prints Christmas trees.



### Rock Paper Scissor Game.(gamerps.c)
#### Implementation Details
* This program is a simple implementation of Rock Paper Scissors game.

* The user is asked to enter their choice (Rock, Paper, or Scissors) through console. 

* The computer randomly selects its choice. 

* The users and computers choice are then compared, and the winner is determined based on the game´s rule.

### Rules 
Rock crushes Scissors.
Scissors cuts Paper.
Paper covers Rock.

### Tic Tac Toe (tictactoe.c)
#### Implementation Details

* The program provides a text- based interface and include features to display current state of the board, checks for win or draws and handle the players move.

* Players take turns entering their move(1-9) based on the grid layout.
* The game initializes an empty 3x3 board.

* Players alternate turns, making moves by entering a number corresponding to the desired position on the grid.

* The program checks for valid moves, prevents overwriting existing marks, and updates the board accordingly.

* The game continues until a player wins or the board is filled, resulting in a draw.

### Word Guessing game (Wordguess.c)
#### Implementation Details
*  The game randomly selects a word from a predefined list, and the player attempts to guess the word by entering letters one at a time. 

* The player has limited number of attempts before the game ends.

* The program displays the current state of the word, hiding unguessed letters with underscores.

* The game starts by selecting a random word from a predefined list.

* Players enter letters one at a time to guess the word. 

* The program checks for repeated guesses, displays the current state of the word, and provides feedback on each guess

* The game continues until the player correctly guesses the word or exceeds the maximum allowed incorrect attempts.