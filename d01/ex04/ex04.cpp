#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *string_ptr = &string;
    std::string &string_ref = string;

    std::cout << "string: " << string << "\n";
    std::cout << "string_ptr: " << *string_ptr << "\n";
    std::cout << "string_ref: " << string_ref << "\n";
    return (0);
}