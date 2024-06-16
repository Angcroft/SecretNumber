# GuessMyNumber

## Overview

GuessMyNumber is a simple C++ game where the user tries to guess a randomly generated secret number between 1 and 100. The game provides feedback on whether the guess is too high or too low and counts the number of attempts. The user can play multiple rounds in a single session.

## Features

- Randomly generates a secret number between 1 and 100
- Provides feedback on whether the guess is too high or too low
- Counts the number of attempts taken to guess the number
- Allows the user to play multiple rounds without restarting the program
- Validates user input to ensure it's a number

## Getting Started

### Prerequisites

- C++ compiler (e.g., GCC, Clang)
- C++ standard library

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/GuessMyNumber.git
    ```

2. Navigate to the project directory:
    ```sh
    cd GuessMyNumber
    ```

3. Compile the program:
    ```sh
    g++ -o GuessMyNumber main.cpp
    ```

4. Run the program:
    ```sh
    ./GuessMyNumber
    ```

## Usage

1. The program will prompt you to guess a number between 1 and 100.
2. Enter your guess and press Enter.
3. The program will tell you if your guess is too high, too low, or correct.
4. Continue guessing until you find the correct number.
5. After guessing correctly, you will be asked if you want to play again (enter 's' or 'S' to play again, any other key to exit).

## Example

```plaintext
Guess the number between 1 and 100: 50
Too high! Try again.
25
Too low! Try again.
37
Correct! You have guessed the number in 3 tries!
Do you want to  play again? (y/n):  y
