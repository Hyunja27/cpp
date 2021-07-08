/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/08 15:55:18 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Karen.hpp"

int main(int ac, char*av[])
{
    Karen K;
    std::string f_name[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
    int case_num = -1;
    int i = -1;

    if (ac != 2)
    {
        std::cout << "arg num is not good..!" << std::endl;
        return (-1);
    }
    while (++i < 4)
    {
        if (f_name[i] == av[1])
            case_num = i;
    }
    if (case_num == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (-1);
    }
    switch (case_num)
    {
    case 0:
        std::cout << "[ DEBUG ] " << std::endl;
        K.complain("debug");
        std::cout << std::endl;
    
        std::cout << "[ INFO ] " << std::endl;
        K.complain("info");
        std::cout << std::endl;
    
        std::cout << "[ WARNING ] " << std::endl;
        K.complain("warning");
        std::cout << std::endl;
    
        std::cout << "[ ERROR ] " << std::endl;
        K.complain("error");
        std::cout << std::endl;
        break;

    case 1:
        std::cout << "[ INFO ] " << std::endl;
        K.complain("info");
        std::cout << std::endl;
    
        std::cout << "[ WARNING ] " << std::endl;
        K.complain("warning");
        std::cout << std::endl;
    
        std::cout << "[ ERROR ] " << std::endl;
        K.complain("error");
        std::cout << std::endl;
        break;

    case 2:    
        std::cout << "[ WARNING ] " << std::endl;
        K.complain("warning");
        std::cout << std::endl;
    
        std::cout << "[ ERROR ] " << std::endl;
        K.complain("error");
        std::cout << std::endl;
        break;

    case 3:
        std::cout << "[ ERROR ] " << std::endl;
        K.complain("error");
        std::cout << std::endl;
        break;
    
    default:
        break;
    }
    return (0);
}