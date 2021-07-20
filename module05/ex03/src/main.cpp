/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/20 17:19:44 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    srand((unsigned int)time(NULL));

    Bureaucrat a("Bure_A", 10);
    Bureaucrat b("Bure_B", 100);
    Bureaucrat c("Bure_C", 140);
    
    ShrubberyCreationForm test_Sh("shrubbery_01");
    PresidentialPardonForm test_P("presidential_01");
    RobotomyRequestForm test_R("robotomy_01");
        
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::cout << test_Sh;
    std::cout << test_P;
    std::cout << test_R;
    

    try
    {
        a.signForm(test_Sh);
        a.excuteForm(test_Sh);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        a.signForm(test_R);
        a.excuteForm(test_R);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        a.signForm(test_P);
        a.excuteForm(test_P);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
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