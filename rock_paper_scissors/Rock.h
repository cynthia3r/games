#ifndef __ROCK_H__
#define __ROCK_H__

#include "Action.h"

class Rock : public Action
{
    static const ActionType TYPE;

public:
    Rock();
    virtual ActionType type() const;
    virtual std::string name() const;
    virtual bool operator==(const Action& other) const;
    virtual bool operator<(const Action& other) const;
};

#endif //__ROCK_H__