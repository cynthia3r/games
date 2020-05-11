#include "Rock.h"

const Action::ActionType Rock::TYPE = Action::ActionType::rock;

Rock::Rock()
{
}

Action::ActionType Rock::type() const
{
    return TYPE;
}

std::string Rock::name() const
{
    return "rock";
}

bool Rock::operator==(const Action& other) const
{
    if (type() == other.type())
        return true;
    return false;
}

bool Rock::operator<(const Action& other) const 
{
    if (*this == other)
        return false;

    if (other.type() == ActionType::paper)
        return true;
    
    if (other.type() == ActionType::scissors)
        return false;

    return false;
}