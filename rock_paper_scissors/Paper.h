#ifndef __PAPER_H__
#define __PAPER_H__

#include "Action.h"

class Paper : public Action
{
    static const ActionType TYPE;

public:
    Paper();
    virtual ActionType type() const;
    virtual std::string name() const;
    virtual bool operator==(const Action& other) const;
    virtual bool operator<(const Action& other) const;
};

#endif //__PAPER_H__