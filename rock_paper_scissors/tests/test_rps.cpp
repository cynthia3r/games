#include <iostream>
#include "test_rps.h"
#include "../ActionFactory.h"
#include "../Rock.h"
#include "../Paper.h"
#include "../Scissors.h"

bool test_action_factory_get_action_rock()
{
    ActionFactory factory;
    return factory.getAction("rock")->type() == Action::ActionType::rock;
}

bool test_action_factory_get_action_paper()
{
    ActionFactory factory;
    return factory.getAction("paper")->type() == Action::ActionType::paper;
}

bool test_action_factory_get_action_scissors()
{
    ActionFactory factory;
    return factory.getAction("scissors")->type() == Action::ActionType::scissors;
}

bool test_rock_with_paper()
{
    Rock rock;
    Paper paper;
    return ((rock < paper) == true);
}

bool test_rock_with_scissors()
{
    Rock rock;
    Scissors scissors;
    return ((rock < scissors) == false);

}

bool test_paper_with_rock()
{
    Paper paper;
    Rock rock;
    return ((paper < rock) == false);
}

bool test_paper_with_scissors()
{
    Paper paper;
    Scissors scissors;
    return ((paper < scissors) == true);

}

bool test_scissors_with_rock()
{
    Scissors scissors;
    Rock rock;
    return ((scissors < rock) == true);
}


bool test_scissors_with_paper()
{
    Scissors scissors;
    Paper paper;
    return ((scissors < paper) == false);
}

