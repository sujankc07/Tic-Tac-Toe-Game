#include <iostream>
#include <vector>

using namespace std;

// Function to print the game board
void printBoard(const vector<char> &board)
{
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}

// Function to check for a win
bool checkWin(const vector<char> &board, char player)
{
    // Winning combinations
    vector<vector<int>> winningCombos = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // rows
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8}, // columns
        {0, 4, 8},
        {2, 4, 6} // diagonals
    };

    for (const auto &combo : winningCombos)
    {
        if (board[combo[0]] == player && board[combo[1]] == player && board[combo[2]] == player)
        {
            return true;
        }
    }
    return false;
}

// Function to check for a draw
bool checkDraw(const vector<char> &board)
{
    for (char cell : board)
    {
        if (cell == ' ')
            return false;
    }
    return true;
}

int main()
{
    vector<char> board(9, ' '); // Initialize the board with empty spaces
    char currentPlayer = 'X';   // Starting player
    int move;

    while (true)
    {
        printBoard(board);
        cout << "Player " << currentPlayer << ", enter your move (1-9): ";
        cin >> move;

        // Convert move to zero-based index
        move--;

        // Check for valid move
        if (move < 0 || move >= 9 || board[move] != ' ')
        {
            cout << "Invalid move! Please try again." << endl;
            continue;
        }

        // Make the move
        board[move] = currentPlayer;

        // Check for win or draw
        if (checkWin(board, currentPlayer))
        {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        if (checkDraw(board))
        {
            printBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}