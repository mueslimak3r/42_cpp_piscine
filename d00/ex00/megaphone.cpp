#include<iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            for (size_t x = 0; x < strlen(argv[i]); x++)
                std::cout << (char)toupper(argv[i][x]);
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}