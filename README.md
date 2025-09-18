
<div align="center">
  <h1>  XADREZ GAME - CHESS  GAME </h1>
  
</div> 
 
## ♟️ Overview

This is a C project that simulates chess piece movements on an 8x8 board. It allows the user to choose a piece, enter its starting position, and display all possible valid moves for that piece.
---
## ♗ Features

Displays an 8x8 chessboard.

Shows valid moves for:

>Rook

>Bishop

>Queen

>Knight

>King

Takes user input in standard chess notation (e.g., D4).

Interactive loop until the user chooses to exit.

How It Works

The program prints the empty chessboard.

The user selects the piece to move.

The user enters the starting position.

The program prints all possible moves for the selected piece.

The process repeats until the user decides to exit.
--
⚙️ How to Run

Clone or download the project.

Compile the code:

gcc chess_moves.c -o chess_moves
--

Run the program:

./chess_moves

## ♜ Input Example
Choose a piece to move:
>1 - Rook
>2 - Bishop
>3 - Queen
>4 - Knight
>5 - King
>0 - Exit

->Enter the starting position (example D4): D4

## ♔ Output Example
>D5
>D6
>D7
>D8
>D3
>D2
>D1
>E4
>F4
>G4
>H4
>C4
>B4
>A4


->Showing all possible moves for a Rook at position D4

## 💻 Technologies

## 💻 Language: C
Compiler: GCC (or any compatible C compiler)
