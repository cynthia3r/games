#ifndef __ACTION_H__
#define __ACTION_H__

#include <string>

class Action
{
public:
    enum class ActionType
    {
        rock=0,
        paper,
        scissors
    };

    virtual ActionType type() const = 0;
    virtual std::string name() const = 0;
    virtual bool operator==(const Action& other) const = 0;
    virtual bool operator<(const Action& other) const = 0;
};

#endif // __ACTION_H__