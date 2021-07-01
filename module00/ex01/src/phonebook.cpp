/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:53:58 by spark             #+#    #+#             */
/*   Updated: 2021/07/01 21:01:11 by spark            ###   ########.fr       */
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
    std::cout << std::endl << "Enter login_name." << std::endl << std::endl << "-> ";
    contact.get_login_name(i);
    std::cout << std::endl << "Enter postal_address." << std::endl << std::endl << "-> ";
    contact.get_postal_address(i);
    std::cout << std::endl << "Enter email_address." << std::endl << std::endl << "-> ";
    contact.get_email_address(i);
    std::cout << std::endl << "Enter phone_number." << std::endl << std::endl << "-> ";
    contact.get_phone_number(i);
    std::cout << std::endl << "Enter birthday_date." << std::endl << std::endl << "-> ";
    contact.get_birthday_date(i);
    std::cout << std::endl << "Enter favorite_meal." << std::endl << std::endl << "-> ";
    contact.get_favorite_meal(i);
    std::cout << std::endl << "Enter underware_color!!!!!!!!!!!!!!!!!!!!!!!!!!!!." << std::endl << std::endl << "-> ";
    contact.get_underware_color(i);
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
    std::cout << std::endl << std::setw(15) << "login_name." << std::setw(5) << "-> " << contact.show_login_name(i);
    std::cout << std::endl << std::setw(15) << "postal_address." << std::setw(5) << "-> " << contact.show_postal_address(i);
    std::cout << std::endl << std::setw(15) << "email_address." << std::setw(5) << "-> " << contact.show_email_address(i);
    std::cout << std::endl << std::setw(15) << "phone_number." << std::setw(5) << "-> " << contact.show_phone_number(i);
    std::cout << std::endl << std::setw(15) << "birthday_date." << std::setw(5) << "-> " << contact.show_birthday_date(i);
    std::cout << std::endl << std::setw(15) << "favorite_meal." << std::setw(5) << "-> " << contact.show_favorite_meal(i);
    std::cout << std::endl << std::setw(15) << "underware_color!!!!!!" << std::setw(5) << "-> " << contact.show_underware_color(i);
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
        std::cout << std::endl << "Wrong Index. press enter!" << std::endl << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        return ;
    }
    if ((int)i > max || (int)i < 0 || i == 0)
    {
        std::cout << std::endl << "Wrong Index. press enter!" << std::endl << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        return ;
    }
    else
        view_specific_data(i - 1, contact);
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
    Data contact;
    std::cout << std::endl << "Awesome phoneBook Pro MK.2" << std::endl << std::endl;

    while (command != "EXIT")
    {
        command = get_new_line();
        if (command == "ADD")
        {
            if (index == 8)
            {
                std::cout << std::endl << "contact is Full !!" << std::endl;
            }
            else
            {
                add_info(index, contact);
                index++;
            }
        }
        else if (command == "SEARCH")
        {
            view_info(index, contact);
            std::cin.clear();
            std::cin.ignore(256, '\n');
        }
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
