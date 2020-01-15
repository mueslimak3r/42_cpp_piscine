#include "phonebook.hpp"

static int execute_rule(int rule, C_contacts &contacts)
{
    switch (rule)
    {
        case 0:
        {
            contacts.add_contact();
            break ;
        }
        case 1:
        {
            contacts.search();
            break ;
        }
        case 2:
            return (1);
    }
    return (0);
}

static int  is_keyword(std::string input)
{
    static const std::string grammar[3] = { "ADD", "SEARCH", "EXIT" };

    for (int i = 0; i < 3; i++)
        if (input.compare(grammar[i]) == 0)
            return (i);
    return (-1);
}

int main(void)
{
    int exit = 0;
    C_contacts contacts;

    while (!exit)
    {
        std::cout << "$>";
        std::string input;
        std::getline(std::cin, input);
        exit = execute_rule(is_keyword(input), contacts);
    }
    std::cout << std::endl;
    return (0);
}