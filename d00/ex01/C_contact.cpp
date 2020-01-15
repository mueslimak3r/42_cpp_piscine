#include "C_contact.hpp"

static std::string  keyword(int index)
{
    static const std::string grammar[11] = { "first name", "last name", "nickname",
                                        "login", "postal address", "email address",
                                        "phone number", "birthday date", "favorite meal",
                                        "underwear color", "darkest secret" };
    return (grammar[index]);
}

int                 C_contact::print_small(void)
{
    std::cout << std::right << std::setw(10) << index << "|";                                                                                                           // index
    std::cout << std::right << std::setw(10) << attributes[0].substr(0, ((attributes[0].length() <= 10) ? 10 : 9)) + ((attributes[0].length() <= 10) ? ("") : ("."));   // first n
    std::cout << "|";
    std::cout << std::right << std::setw(10) << attributes[1].substr(0, ((attributes[1].length() <= 10) ? 10 : 9)) + ((attributes[1].length() <= 10) ? ("") : ("."));   //last n
    std::cout << "|";
    std::cout << std::right << std::setw(10) << attributes[2].substr(0, ((attributes[2].length() <= 10) ? 10 : 9)) + ((attributes[2].length() <= 10) ? ("") : ("."));   // nickname
    std::cout << "\n";
    return (0);
}

int		            C_contact::print_full(void)
{
    for (int i = 0; i < 11; i++)
    {
        std::cout << std::left << std::setw(20) << keyword(i);
        std::cout << attributes[i] + "\n";
    }
    return (0);
}

int		            C_contact::add_attribute(int type)
{
    std::cout << "please enter your " + keyword(type);
    std::cout << ": ";
    std::getline(std::cin, attributes[type]);
    return (0);
}