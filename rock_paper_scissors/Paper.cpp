#include "Paper.h"

const Action::ActionType Paper::TYPE = Action::ActionType::paper;

Paper::Paper()
{
}

Action::ActionType Paper::type() const
{
    return TYPE;
}

std::string Paper::name() const
{
    return "paper";
}

bool Paper::operator==(const Action& other) const
{
    if (type() == other.type())
        return true;
    return false;
}

bool Paper::operator<(const Action& other) const 
{
    if (*this == other)
        return false;

    if (other.type() == ActionType::rock)
        return false;
    
    if (other.type() == ActionType::scissors)
        return true;

    return false;
}