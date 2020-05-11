#ifndef __ACTIONFACTORY_H__
#define __ACTIONFACTORY_H__

#include <string>
#include <map>
#include <vector>
#include "Action.h"

class ActionFactory
{
public:
    ActionFactory();

    Action* getAction (std::string name);
    Action* getAction (int option);
    Action* getActionRandomly ();

private:
    std::vector<std::string> _options;
    std::map<std::string, Action*> _actions;
};

#endif // __ACTIONFACTORY_H__