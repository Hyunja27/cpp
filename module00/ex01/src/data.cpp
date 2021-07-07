/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:02:50 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 15:21:01 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

void    Data::get_first_name(int i)
{
    std::getline(std::cin, first_name[i]);
    // std::cin >> first_name[i];
}

void    Data::get_last_name(int i)
{
    std::getline(std::cin, last_name[i]);
    // std::cin >> last_name[i];
}

void    Data::get_nick_name(int i)
{
    std::getline(std::cin, nick_name[i]);
    // std::cin >> nick_name[i];
}

void    Data::get_phone_number(int i)
{
    std::getline(std::cin, phone_number[i]);
    // std::cin >> phone_number[i];
}

void    Data::get_darkest_secret(int i)
{
    std::getline(std::cin, darkest_secret[i]);
    // std::cin >> darkest_secret[i];
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

std::string    Data::show_phone_number(int i)
{
    return (phone_number[i]);
}

std::string    Data::show_darkest_secret(int i)
{
    return (darkest_secret[i]);
}
