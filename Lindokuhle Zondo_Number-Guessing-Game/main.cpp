#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 10 + 1;

    // Initialize variables
    int userGuess = 0;

    // Keep asking the user to guess until they get it right
    while (userGuess != secretNumber) {
        // Get user input
        std::cout << "Guess the number between 1 and 10: ";
        std::cin >> userGuess;

        // Provide feedback on the user's guess
        if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    // Congratulate the user when they guess the correct number
    std::cout << "Congratulations! You guessed the correct number " << secretNumber << "." << std::endl;

    return 0;
}
