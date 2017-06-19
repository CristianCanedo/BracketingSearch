#include <iostream>
#include <stdlib.h>
#include <limits>
#include <fstream>

void PressEnterToContinue(); // Function prototype

int main()
{
    unsigned short int r = rand() % 100 + 1;    // creates a random number
    unsigned short int selection;               // users guess saved here
    unsigned short int numberOfGuesses = 0;         // number of user guesses

    while (selection != r){
            std::cout << "\nGuess the number between 1 and 100: ";
            std::cin >> selection;

        if (selection > r){
            std::cout << "\n You've guessed too high!" << std::endl;
            numberOfGuesses++;
        }
        else if (selection < r){
            std::cout << "\n You've guessed to low!" << std::endl;
            numberOfGuesses++;
        }
    }
    system("cls");
    std::cout << "\nCongratulations you've guessed the correct number!" << std::endl;
    std::cout << "It took you " << numberOfGuesses << " guesses!" << std::endl;

    return 0;
}
