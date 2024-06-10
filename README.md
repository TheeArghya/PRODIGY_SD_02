# PRODIGY_SD_02

## Task Description
This repository contains the code and documentation for my second task in the Software Development track of my internship. The task involves building a program that generates a random number and challenges the user to guess it. The program prompts the user to input their guess, compares it to the generated number, and provides feedback if the guess is too high or too low. It continues until the user correctly guesses the number and then displays the number of attempts it took to win the game.

## File Description
- `GuessingGame.cpp`: The main C++ file that contains the implementation of the number guessing game.

## How to Run
To run the number guessing game program, follow these steps:

1. **Clone the repository:**
   ```bash
   git clone https://github.com/TheeArghya/PRODIGY_SD_02.git
   cd PRODIGY_SD_02
2. **Compile the C++ program:**
Make sure you have a C++ compiler installed (like g++). 
Compile the program using the following command:
  ```bash
  g++ GuessingGame.cpp -o GuessingGame
  ```
3. **Run the compiled program:**
  ```bash
  ./GuessingGame
  ```
4. **Example**
   ```
    Welcome to the Guessing Game!
    A random number between 1 and 100 is generated.
    Can you guess what it is?
    Enter your guess: 50
    Too low! Try again.
    Enter your guess: 75
    Too high! Try again.
    Enter your guess: 63
    Congratulations! You guessed the number in 3 attempts.
  
