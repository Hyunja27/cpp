#include <iostream>
#include <algorithm>

int main(int ac, char *av[])
{
    int i = 0;
    unsigned long j = -1;
    std::string str;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std::cout << std::endl;
        return (-1);
    }
    while (++i < ac)
    {
        str = av[i];
        while(++j < str.size())
        {
            if (str[j] == 32)
                std::cout << str[j];
            else
            {
                str[j] = std::toupper(str[j]);
                std::cout << str[j];
            }
        }
        j = -1;
    }
    std::cout << std::endl;
    return (0);
}
