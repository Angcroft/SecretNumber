#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    bool playAgain = true;
    char answer;

    while (playAgain) {
        int secretNumber = rand() % 100 + 1;
        int guess;
        int tries = 0;
        int guessed = false;

        while (!guessed) {
            std::cout << "Guess the number between 1 and 100: ";
            std::cin >> guess;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please, input another number.\n";
            } else {
                tries++;

                if (guess > secretNumber) {
                    std::cout << "Too high! Try again.\n";
                } else if (guess < secretNumber) {
                    std::cout << "Too low! Try again.\n";
                } else {
                    std::cout << "Correct! You have guessed the number in " << tries << " tries! \n";
                    guessed = true;
                }
            }
        }

        std::cout << "Do you want to  play again? (y/n): ";
        std::cin >> answer;

        switch(answer) {
            case 'y':
            case 'Y':
                playAgain = true;
                break;
            case 'n':
            case 'N':
                std::cout << "Exiting program...";
                playAgain = false;
                break;
            default:
                std::cout << "Incorrect input! Bye anyways...";
                break;
        }
    }

    return 0;
}
