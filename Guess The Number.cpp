#include <iostream>
#include <random>
#include <string>
#include <sstream>

int main(){
    std::cout << R"(
-- Welcome To My Game --
RULES
    #1) You Have to Guess a Number Between 1-100.
    #2) You Will Get 7 Chances/guesses.
    #3) After Every Guess You Will Get a Feedback Indicating Whether You Guessed Too High Or Too Low.
    #4) Good Luck! :D

)";

    std::random_device          randomDevice;
    std::default_random_engine  randomEngine(randomDevice());
    std::uniform_int_distribution<int> randomNumberGenerator(1, 100);

    int secret = randomNumberGenerator(randomEngine);
    std::string exitMessage = "Your 7 Guesses are over, better luck next time! The secret was: " + std::to_string(secret);

    for(int g = 1; g < 8; g++) {
        std::cout << "------------------\n"
            << "Guess #" << g << "-\n"
            << "Enter Your Guess: ";

        int userInput;
        do {
            std::string line;
            std::getline(std::cin, line);
            std::stringstream lineStream(line);
            if (lineStream >> userInput && userInput > 0 && userInput <= 100) {
                break;
            }
            std::cout << "Invalid user Input. Please try again.\n";
        }
        while(true);

        if(userInput == secret){
            exitMessage = "Congratulations You Won!!!";
            break;
        }
        else if (userInput < secret) {
            std::cout << "You Guessed Too Low, Try Entering a Higher Number!\n\n";
        }
        else {
            std::cout << "You Guessed Too High, Try Entering a Lower Number!\n\n";
        }
    }
    std::cout << exitMessage << "\n\n";
    return 0;
}


// can add random number functionality
// same number each time prog is run
// compile to exe by "g++ <filename.cpp>"
//end of file//
