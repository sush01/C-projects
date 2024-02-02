#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_WORDS 6        // maximum words
#define MAX_WORD_LENGTH 12 // maximum length of the word
#define MAX_TRIES 6        // number of trials

const char *randomWord();
void displayWord(const char *, const char *);

// function chose random word from the wordlist
const char *randomWord()
{
  const char *wordList[MAX_WORDS] = {"apple", "banana", "orange", "grape", "kiwi", "melon"};
  int index = rand() % MAX_WORDS;
  return wordList[index];
}

// function to display the current state of the word with hidden letters
void displayWord(const char *word, const char *guessedLetters)
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (strchr(guessedLetters, word[i]) != NULL)
    {
      printf("%c", word[i]);
    }
    else
    {
      printf("_ ");
    }
  }
  printf("\n");
}

int main()
{
  srand(time(NULL));

  const char *wordToGuess = randomWord();
  char guessedLetters[MAX_WORD_LENGTH] = {'\0'};
  int incorrectAttempts = 0;

  printf("Welcome to Hangman!\n");

  while (incorrectAttempts < MAX_TRIES)
  {
    printf("\n");
    displayWord(wordToGuess, guessedLetters);

    char guess;
    printf("Enter a letter: ");
    scanf(" %c", &guess);

    // checks if the guess letter is already guessed
    if (strchr(guessedLetters, guess) != NULL)
    {
      printf("You've already guessed that letter. Try again.\n");
      continue;
    }

    guessedLetters[strlen(guessedLetters)] = guess;

    // checks if the enter letter matches with the random selected word
    if (strchr(wordToGuess, guess) != NULL)
    {
      printf("Good guess!\n");

      // Check if the user has guessed all letters for the selected word
      int allLettersGuessed = 1;
      for (int i = 0; i < strlen(wordToGuess); i++)
      {
        if (strchr(guessedLetters, wordToGuess[i]) == NULL)
        {
          allLettersGuessed = 0;
          break;
        }
      }

      if (allLettersGuessed)
      {
        printf("\nCongratulations! You guessed the word: %s\n", wordToGuess);
        break;
      }
    }
    else
    {
      printf("Incorrect guess. Try again.\n");
      incorrectAttempts++;
    }
  }
  // tracks number of attempts
  if (incorrectAttempts == MAX_TRIES)
  {
    printf("\nSorry, you've run out of attempts. The word was: %s\n", wordToGuess);
  }

  return 0;
}