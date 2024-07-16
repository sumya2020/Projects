#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char GetComputerMove() {
    srand(time(NULL));
    int move = rand() % 3;

    if (move == 0) {
        return 'P';  // Paper
    } else if (move == 1) {
        return 'R';  // Rock
    } else {
        return 'S';  // Scissors
    }
}



int GenerateResult(char PlayerM, char ComputerM) {
    if (PlayerM == ComputerM) {
        return 0;  // Draw
    } else if ((PlayerM == 'P' || PlayerM == 'p') && (ComputerM == 'R' || ComputerM == 'r')) {
        return 1;  // Player wins (Paper beats Rock)
    } else if ((PlayerM == 'P' || PlayerM == 'p') && (ComputerM == 'S' || ComputerM == 's')) {
        return -1;  // Computer wins (Scissors beats Paper)
    } else if ((PlayerM == 'S' || PlayerM == 's') && (ComputerM == 'P' || ComputerM == 'p')) {
        return 1;  // Player wins (Scissors beats Paper)
    } else if ((PlayerM == 'S' || PlayerM == 's') && (ComputerM == 'R' || ComputerM == 'r')) {
        return -1;  // Computer wins (Rock beats Scissors)
    } else if ((PlayerM == 'R' || PlayerM == 'r') && (ComputerM == 'P' || ComputerM == 'p')) {
        return -1;  // Computer wins (Paper beats Rock)
    } else if ((PlayerM == 'R' || PlayerM == 'r') && (ComputerM == 'S' || ComputerM == 's')) {
        return 1;  // Player wins (Rock beats Scissors)
    }
    return 0;  // Default case (shouldn't normally happen)
}

int main() {
    char Pmove;
    char ComputerM;
    
    cout << ".........Rock Paper Scissors Game.........." << endl;

    while (true) {
        cout << "Enter your move (R for Rock, P for Paper, S for Scissors): ";
        cin >> Pmove;

        // Convert lowercase to uppercase for uniform comparison
        Pmove = toupper(Pmove);

        if (Pmove == 'P' || Pmove == 'R' || Pmove == 'S') {
            break;  // Valid move entered, exit the loop
        } else {
            cout << "You entered a wrong character. Please try again." << endl;
        }
    }

    ComputerM = GetComputerMove();
    int Result = GenerateResult(Pmove, ComputerM);

    if (Result == 0) {
        cout << "It's a draw!" << endl;
    } else if (Result == 1) {
        cout << "Congratulations! You won the game!" << endl;
    } else {
        cout << "Computer won the game. Better luck next time!" << endl;
    }

    return 0;
}
