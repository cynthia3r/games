#include "Scissors.h"

const Action::ActionType Scissors::TYPE = Action::ActionType::scissors;

Scissors::Scissors()
{
}

Action::ActionType Scissors::type() const
{
    return TYPE;
}

std::string Scissors::name() const
{
    return "scissors";
}

bool Scissors::operator==(const Action& other) const
{
    if (type() == other.type())
        return true;
    return false;
}

bool Scissors::operator<(const Action& other) const 
{
    if (*this == other)
        return false;

    if (other.type() == ActionType::paper)
        return false;
    
    if (other.type() == ActionType::rock)
        return true;

    return false;
}