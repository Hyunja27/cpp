/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:53:51 by spark             #+#    #+#             */
/*   Updated: 2021/07/02 20:35:06 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <ctype.h>

class Data
{
    private:
        std::string first_name[9];
        std::string last_name[9];
        std::string nick_name[9];
        std::string login_name[9];
        std::string postal_address[9];
        std::string email_address[9];
        std::string phone_number[9];
        std::string birthday_date[9];
        std::string favorite_meal[9];
        std::string underware_color[9];
        std::string darkest_secret[9];
    public:
        void get_first_name(int i);
        void get_last_name(int i);
        void get_nick_name(int i);
        void get_login_name(int i);
        void get_postal_address(int i);
        void get_email_address(int i);
        void get_phone_number(int i);
        void get_birthday_date(int i);
        void get_favorite_meal(int i);
        void get_underware_color(int i);
        void get_darkest_secret(int i);
        std::string show_first_name(int i);
        std::string show_last_name(int i);
        std::string show_nick_name(int i);
        std::string show_login_name(int i);
        std::string show_postal_address(int i);
        std::string show_email_address(int i);
        std::string show_phone_number(int i);
        std::string show_birthday_date(int i);
        std::string show_favorite_meal(int i);
        std::string show_underware_color(int i);
        std::string show_darkest_secret(int i);
        
};

#endif
