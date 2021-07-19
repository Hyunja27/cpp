/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/19 16:58:53 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Bure_A", 2);
        std::cout << a << std::endl;
        
        // a.increaseGrade();
        // std::cout << a << std::endl;
        // a.increaseGrade();
        
        Bureaucrat c("Bure_A", 151);
        Bureaucrat b("Bure_A", -3);
    }
    catch (std::exception &e)
    {    
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}