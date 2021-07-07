/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:53:58 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 15:31:47 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

std::string		get_new_line()
{
	std::string command;

	std::cout << std::endl << std::endl
    << "Enter what you want to do : ";
    std::getline(std::cin, command);
    std::cin.clear();
    // std::cin.ignore(256, '\n');
    // std::cin >> command;
	return (command);
}

void		add_info(int i, Data& contact)
{
    std::cout << std::endl << "Enter first_name." << std::endl << std::endl << "-> ";
    contact.get_first_name(i);
    std::cout << std::endl << "Enter last_name." << std::endl << std::endl << "-> ";
    contact.get_last_name(i);
    std::cout << std::endl << "Enter nick_name." << std::endl << std::endl << "-> ";
    contact.get_nick_name(i);
    std::cout << std::endl << "Enter phone_number." << std::endl << std::endl << "-> ";
    contact.get_phone_number(i);
    std::cout << std::endl << "Enter darkest_secret." << std::endl << std::endl << "-> ";
    contact.get_darkest_secret(i);
    std::cin.clear();
    return ;
}

void		add_info_replace(int i, Data& contact)
{
    std::cout << std::endl << "Enter first_name." << std::endl << std::endl << "-> ";
    contact.get_first_name(i);
    std::cout << std::endl << "Enter last_name." << std::endl << std::endl << "-> ";
    contact.get_last_name(i);
    std::cout << std::endl << "Enter nick_name." << std::endl << std::endl << "-> ";
    contact.get_nick_name(i);
    std::cout << std::endl << "Enter phone_number." << std::endl << std::endl << "-> ";
    contact.get_phone_number(i);
    std::cout << std::endl << "Enter darkest_secret." << std::endl << std::endl << "-> ";
    contact.get_darkest_secret(i);
    std::cin.clear();
    return ;
}

std::string    makeup_data(std::string str)
{
    std::string line;
    line = str;
    unsigned long     i = 9;

    if (str.size() > 10)
    {    
        line[9] = '.';
        while(++i <= str.size())
            line[i] = '\0';
    }
    return (line);
}

void    view_specific_data(int i, Data& contact)
{
    std::cout << std::endl << std::setw(15) << "first_name." << std::setw(5) << "-> " << contact.show_first_name(i);
    std::cout << std::endl << std::setw(15) << "last_name." << std::setw(5) << "-> " << contact.show_last_name(i);
    std::cout << std::endl << std::setw(15) << "nick_name." << std::setw(5) << "-> " << contact.show_nick_name(i);
    std::cout << std::endl << std::setw(15) << "phone_number." << std::setw(5) << "-> " << contact.show_phone_number(i);
    std::cout << std::endl << std::setw(15) << "darkest_secret" << std::setw(5) << "-> " << contact.show_darkest_secret(i);
    std::cin.clear();
}

void    select_data(int max, Data& contact)
{
    int i;

    std::cout << std::endl << "Choose data" << std::endl << std::endl << "-> ";
    std::cin >> i;
    
    if (std::cin.fail())
    {
        std::cout << std::endl << "Wrong Index." << std::endl << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        return ;
    }
    if ((int)i > max || (int)i < 0 || i == 0)
    {
        std::cout << std::endl << "Wrong Index." << std::endl << std::endl;
        std::cin.clear();
        std::cin.ignore();
        return ;
    }
    else
        view_specific_data(i - 1, contact);
    std::cin.clear();
    std::cin.ignore();
    return ;
}

void    view_info(int max, Data& contact)
{
    int i = -1;
    std::string a;
    
    (void)contact;
    std::cout << std::endl << "=============================================" << std::endl;
    std::cout << std::endl << "|   index  |first name|last name | nickname |" << std::endl;
    std::cout << std::endl << "=============================================" << std::endl;
    while (++i < max)
        std::cout << std::endl << "|" << std::setw(10)  << i + 1 << "|" << std::setw(10) << makeup_data(contact.show_first_name(i)) << "|" << std::setw(10)  << makeup_data(contact.show_last_name(i)) << "|" << std::setw(10)  << makeup_data(contact.show_nick_name(i)) << "|";
    std::cout << std::endl << "=============================================" << std::endl;
    if (max > 0)
        select_data(max, contact);
}

int main()
{
    std::string command;
    int index = 0;
    int re_index = 0;
    Data contact;
    std::cout << std::endl << "Awesome phoneBook Pro MK.2" << std::endl << std::endl;

    while (command != "EXIT")
    {
        command = get_new_line();
        if (command == "ADD")
        {
            if (index == 8)
            {
                add_info_replace(re_index, contact);
                std::cout << std::endl << "Old contact Replaced !!" << std::endl;
                re_index++;
                if (re_index == 8)
                    re_index = 0;
            }
            else
            {
                add_info(index, contact);
                index++;
            }
        }
        else if (command == "SEARCH")
            view_info(index, contact);
        else if (command == "EXIT")
        {
			std::cout << "EXIT?! OK! SeeYA!" << std::endl;
			break;
		}
        else 
        {
            std::cout << "that's not good. re_type";
            std::cin.clear();
        }
    }
    return (0);
}
