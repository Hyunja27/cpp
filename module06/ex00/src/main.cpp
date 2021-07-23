/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/23 15:15:33 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Arg Num is not good..!" << std::endl;
        return (-1);
    }

    Conversion con(av[1]);
    
    try
    {
        con.basic_check();
    }
    catch(std::string& e)
    {
        std::cerr << e << std::endl;
        return (-1);
    }

    try
    {
        con.toChar();
    }
    catch (std::string & e)
    {    
        std::cout << e << std::endl;
    }
    
    try
    {
        con.toInt();
    }
    catch (std::string & e)
    {    
        std::cout << e << std::endl;
    }
    
    try
    {
        con.toFloat();
    }
    catch (std::string & e)
    {    
        std::cout << e << std::endl;
    }
    
    try
    {
        con.toDouble();
    }
    catch (std::string & e)
    {    
        std::cout << e << std::endl;
    }

    
    return 0;
}