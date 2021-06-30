#include <iostream>

std::string		get_new_line()
{
	std::string command;

	std::cout << std::endl << std::endl
    << "Enter what you want to do : ";
	std::cin >> command;
	return (command);
}

int main()
{
    std::string command;

    std::cout << std::endl << "Awesome phoneBook Pro MK02" << std::endl << std::endl
    << "Wellcome! Enter what you want to do : ";
    std::cin >> command;

    while (1)
    {
        if (command == "ADD")
            std::cout << "ADD?!";
        else if (command == "SEARCH")
            std::cout << "SEARCH?!";
        else if (command == "EXIT")
        {
			std::cout << "EXIT?! OK!" << std::endl;
			break;
		}
        else 
            std::cout << "that's not good.";
        command = get_new_line();
    }
    return (0);
}
