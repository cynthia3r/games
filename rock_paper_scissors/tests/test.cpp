#include <iostream>
#include <map>
#include "test_rps.h"

bool run_rock_paper_scissors_tests(std::ostream &out)
{
    typedef bool (*TestFunction)(void);
    std::map<std::string, TestFunction> testMap = {{"test_action_factory_get_action_rock", test_action_factory_get_action_rock},
                                                    {"test_action_factory_get_action_paper", test_action_factory_get_action_paper},
                                                    {"test_action_factory_get_action_scissors", test_action_factory_get_action_scissors},
                                                    {"test_rock_with_paper", test_rock_with_paper},
                                                    {"test_rock_with_scissors", test_rock_with_scissors},
                                                    {"test_paper_with_rock", test_paper_with_rock},
                                                    {"test_paper_with_scissors", test_paper_with_scissors},
                                                    {"test_scissors_with_rock", test_scissors_with_rock},
                                                    {"test_scissors_with_paper", test_scissors_with_paper}
                                                    };

    out << "Running " << testMap.size() << " tests\n";
    bool status = true;
    for (auto &test : testMap)
    {
        out << "  Test " << test.first << ": ";
        if (test.second())
            out << "passed\n";
        else
        {
            out << "failed\n";
            status = false;
        }
    }

    return status;
}

int main(int argc, char *argv[])
{
    if (run_rock_paper_scissors_tests(std::cout))
        std::cout << "All tests passed successfully" << std::endl;
    else
        std::cout << "Some tests failed!" << std::endl;

    return 0;
}