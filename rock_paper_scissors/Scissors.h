#ifndef __SCISSORS_H__
#define __SCISSORS_H__

#include "Action.h"

class Scissors : public Action
{
    static const ActionType TYPE;

public:
    Scissors();
    virtual ActionType type() const;
    virtual std::string name() const;
    virtual bool operator==(const Action& other) const;
    virtual bool operator<(const Action& other) const;
};

#endif //__SCISSORS_H__