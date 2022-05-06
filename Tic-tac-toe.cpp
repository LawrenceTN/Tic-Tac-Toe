// Tic-tac-toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

char board[3][3] = { {'1', '2', '3'},
                     {'4', '5', '6'},
                     {'7', '8', '9'} };

void display_board() {

    std::cout << "\t   |   |   \n";
    std::cout << "\t " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "  \n";
    std::cout << "\t___|___|___\n";
    std::cout << "\t   |   |   \n";
    std::cout << "\t " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "  \n";
    std::cout << "\t___|___|___\n";
    std::cout << "\t   |   |   \n";
    std::cout << "\t " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "  \n";
    std::cout << "\t   |   |   \n";
    return;
}

int checkWinner(int &player)
{
    for (int i = 0; i < 3; i++) { // Check rows
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            std::cout << player << " has won!\n";
            return player;
        }
    }

    for (int i = 0; i < 3; i++) { // Check columns
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            std::cout << player << " has won!\n";
            return player;
        }
    }
    
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) // First diaganol
    {
        std::cout << player << " has won!\n";
        return player;
    }

    
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0) // Second diaganol
    {
        std::cout << player << " has won!\n";
        return player;
    }
    
    return 0;
}


int main()
{

    int winner = 0;
    int choice = 0;
    int turn = 1;
    int totalTurns = 0;

    display_board();

    std::cout << "\nPlayer 1: X\n";
    std::cout << "Player 2: O\n";
    

    while (winner != 1 && winner != 2 && totalTurns != 9) {
        std::cout << "Player " << turn << "s turn -- choose your spot!" << std::endl;
        
        std::cin >> choice;
        
        switch (choice) {
        case 1:
            if (board[0][0] == '1') {
                if (turn == 1) {
                    board[0][0] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[0][0] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 2:
            if (board[0][1] == '2') {
                if (turn == 1) {
                    board[0][1] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[0][1] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 3:
            if (board[0][2] == '3') {
                if (turn == 1) {
                    board[0][2] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[0][2] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 4:
            if (board[1][0] == '4') {
                if (turn == 1) {
                    board[1][0] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[1][0] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 5:
            if (board[1][1] == '5') {
                if (turn == 1) {
                    board[1][1] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[1][1] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 6:
            if (board[1][2] == '6') {
                if (turn == 1) {
                    board[1][2] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[1][2] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 7:
            if (board[2][0] == '7') {
                if (turn == 1) {
                    board[2][0] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[2][0] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 8:
            if (board[2][1] == '8') {
                if (turn == 1) {
                    board[2][1] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[2][1] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        case 9:
            if (board[2][2] == '9') {
                if (turn == 1) {
                    board[2][2] = 'X';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn++;
                }
                else {
                    board[2][2] = 'O';
                    winner = checkWinner(turn);
                    totalTurns++;
                    turn--;
                }
            }
            else {
                std::cout << "Spot already filled!\n";
            }
            display_board();
            break;
        default:
            std::cout << "Not a valid choice\n";
            std::cin.clear(); // Reset error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discord bad data
        }
    }

    (winner == 0) ? std::cout << "\nCat's game!\n" : std::cout << "\nPlayer " << winner << " is the winner!\n";
}