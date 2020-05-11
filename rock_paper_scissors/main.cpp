#include <iostream>
#include "ActionFactory.h"

int get_user_choice()
{
    int userChoice;

    /* This loop will take user input*/
    do
    {
        std::cout << "Please enter a valid move [1,2,3] to play the game or 0 to quit: ";
        std::cin >> userChoice;

    } while (!(userChoice >= 0 && userChoice <=3));

    return userChoice - 1;
}

int main(int argc, char **argv)
{
    ActionFactory actionFactory;

    std::cout << "PAPER SCISSORS ROCK: Game Rules" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Paper beats(wraps) Rock" << std::endl;
    std::cout << "Rock beats (blunts) Scissors" << std::endl;
    std::cout << "Scissors beats(cuts) Paper" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "0 - Quit the Game" << std::endl;
    std::cout << "1 - Rock [Symbol: Fist]" << std::endl;
    std::cout << "2 - Paper [Symbol: Open hand]" << std::endl;
    std::cout << "3 - Scissors [Symbol: Showing the index and middle finger]" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    int userScore = 0;
    int computerScore = 0;

    while(true)
    {
        int userChoice = get_user_choice();

        if (-1 == userChoice)
            break;

        Action *userAction = actionFactory.getAction (userChoice);
        Action *randomlyChosenAction = actionFactory.getActionRandomly();

        std::cout << "User choose " << userAction->name() 
                    << " and computer choose " << randomlyChosenAction->name();

        if (*userAction == *randomlyChosenAction)
        {
            std::cout << " -> result: draw" << std::endl;
        }
        else 
        {
            if (*userAction < *randomlyChosenAction)
            {
                std::cout << " -> result: Computer won" << std::endl;
                computerScore++;
            }
            else
            {
                std::cout << " -> result: User won" << std::endl;
                userScore++;
            }
        }
        std::cout << "-------------------------------" << std::endl;
    }
    std::cout << "-------------------------------" << std::endl;
    std::cout << "User Score: " << userScore << "\tComputer Score: " << computerScore << std::endl;
}