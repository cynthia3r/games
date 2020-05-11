#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "ActionFactory.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

ActionFactory::ActionFactory()
    : _options({"rock", "paper", "scissors"}),
    _actions({{_options[0], new Rock}, {_options[1], new Paper}, {_options[2], new Scissors}})
{
    //randomize the seed so that different random numbers are generated every time
    std::srand(std::time(nullptr)); 
}

Action* ActionFactory::getAction (std::string name)
{
    std::transform(name.begin(), name.end(), name.begin(),
                    [](unsigned char c){ return std::tolower(c);});

    if (_actions.count(name))
        return _actions[name];
    
    return nullptr;
}

Action* ActionFactory::getAction (int option)
{
    return getAction(_options[option]);
}

Action* ActionFactory::getActionRandomly ()
{
    //rand()%3 will generate 0,1,2 which will be mapped with enum ActionType (rock, paper, scissors)
    int choice = (rand() %3); 
    return _actions[_options[choice]];
}
