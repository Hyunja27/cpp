/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/20 15:38:30 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat a("Bure_A", 10);
    Bureaucrat b("Bure_B", 100);
    Bureaucrat c("Bure_C", 140);

    Form test10("test_10", 10, 8);
    Form test90("test_90", 90, 88);
    Form test140("test_140", 140, 138);
        
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::cout << test10;
    std::cout << test90;
    std::cout << test140;
    
    try
    {
        b.signForm(test10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        b.signForm(test90);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        b.signForm(test140);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << test10;
    std::cout << test90;
    std::cout << test140;
    
    
    // try
    // {
    //     Bureaucrat a("Bure_A", 2);
    //     std::cout << a << std::endl;
        
    //     // a.increaseGrade();
    //     // std::cout << a << std::endl;
    //     // a.increaseGrade();
        
    //     Bureaucrat c("Bure_A", 151);
    //     Bureaucrat b("Bure_A", -3); 
    // }
    // catch (std::exception &e)
    // {    
    //     std::cout << e.what() << std::endl;
    // }
    
    return 0;
}