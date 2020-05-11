#ifndef __TEST_RPS_H__
#define __TEST_RPS_H__

#include <iostream>

bool test_action_factory_get_action_rock();
bool test_action_factory_get_action_paper();
bool test_action_factory_get_action_scissors();

bool test_rock_with_paper();
bool test_rock_with_scissors();
bool test_paper_with_rock();
bool test_paper_with_scissors();
bool test_scissors_with_rock();
bool test_scissors_with_paper();

#endif // __TEST_RPS_H__