/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:02:50 by spark             #+#    #+#             */
/*   Updated: 2021/07/01 17:03:36 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

void    Data::get_first_name(int i)
{
    std::cin >> first_name[i];
}

void    Data::get_last_name(int i)
{
    std::cin >> last_name[i];
}

void    Data::get_nick_name(int i)
{
    std::cin >> nick_name[i];
}

void    Data::get_login_name(int i)
{
    std::cin >> login_name[i];
}

void    Data::get_postal_address(int i)
{
    std::cin >> postal_address[i];
}

void    Data::get_email_address(int i)
{
    std::cin >> email_address[i];
}

void    Data::get_phone_number(int i)
{
    std::cin >> phone_number[i];
}

void    Data::get_birthday_date(int i)
{
    std::cin >> birthday_date[i];
}

void    Data::get_favorite_meal(int i)
{
    std::cin >> favorite_meal[i];
}

void    Data::get_underware_color(int i)
{
    std::cin >> underware_color[i];
}

void    Data::get_darkest_secret(int i)
{
    std::cin >> darkest_secret[i];
}

std::string    Data::show_first_name(int i)
{
    return (first_name[i]);
}

std::string    Data::show_last_name(int i)
{
    return (last_name[i]);
}

std::string    Data::show_nick_name(int i)
{
    return (nick_name[i]);
}

std::string    Data::show_login_name(int i)
{
    return (login_name[i]);
}

std::string    Data::show_postal_address(int i)
{
    return (postal_address[i]);
}

std::string    Data::show_email_address(int i)
{
    return (email_address[i]);
}

std::string    Data::show_phone_number(int i)
{
    return (phone_number[i]);
}

std::string    Data::show_birthday_date(int i)
{
    return (birthday_date[i]);
}

std::string    Data::show_favorite_meal(int i)
{
    return (favorite_meal[i]);
}

std::string    Data::show_underware_color(int i)
{
    return (underware_color[i]);
}

std::string    Data::show_darkest_secret(int i)
{
    return (darkest_secret[i]);
}
