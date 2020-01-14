#include <iostream>

char *to_capital(char *arg)
{
    int i = 0;

    while (arg[i] != '\0')
    {
        if (arg[i] >= 'a' && arg[i] <= 'z')
            arg[i] = arg[i] - 32;
        i++;
    }
    return (arg);
}

int main (int argc, char **argv)
{
    int i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            std::cout << to_capital(argv[i]);
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}