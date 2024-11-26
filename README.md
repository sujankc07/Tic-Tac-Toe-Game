# Tic-Tac-Toe Game

This is a simple console-based implementation of the classic Tic-Tac-Toe game written in C++. The game allows two players to take turns and play on a 3x3 board until a player wins or the game ends in a draw.

## Features
- Two-player mode (X vs O).
- Checks for valid moves.
- Detects win and draw conditions.
- Simple console-based interface.

## How to Compile and Run

1. **Clone or download the source code**:
   Save the file as `tictactoe.cpp`.

2. **Compile the program**:
   Use a C++ compiler such as `g++` to compile the program:
   ```bash
   g++ -o tictactoe tictactoe.cpp

3. **Run the program:**
    ```bash
    ./tictactoe

## Gameplay Instructions

1. Players take turns to make their moves.

2. Each player enters a number from 1 to 9 to mark their position on the board.
    ```diff
     1 | 2 | 3
    ---|---|---
     4 | 5 | 6
    ---|---|---
     7 | 8 | 9

3. The program will check if a player wins or if the game ends in a draw.

4. The game ends when a player wins or the board is full.

## Example Output
    ```plaintext
       |   |  
    ---|---|---
       |   |  
    ---|---|---
       |   |  
    Player X, enter your move (1-9): 5
       |   |  
    ---|---|---
       | X |  
    ---|---|---
       |   |  
    Player O, enter your move (1-9): 1
    O |   |  
    ---|---|---
       | X |  
    ---|---|---
       |   |  
    ...
    Player X wins!
    ```
## File Details

`tictactoe.cpp`: Contains the source code for the game.

## Functionality Overview

1. **printBoard**
    Prints the current state of the game board.

2. **checkWin**
    Checks if a player has won by evaluating all possible winning combinations.

3. **checkDraw**
    Checks if all cells on the board are filled, indicating a draw.

4. **Main Game Loop**
    Manages user input, validates moves, and alternates turns between players until the game ends.


