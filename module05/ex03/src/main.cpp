/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/21 17:05:45 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
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

    Intern a_intern;
    
    Form * test_Sh = a_intern.makeForm("shrubbery creation", "shh_kim");
    Form * test_P = a_intern.makeForm("presidential request", "p_kim");
    Form * test_R = a_intern.makeForm("robotomy request", "r_kim");
    try
    {
        Form * test_fail_1 = a_intern.makeForm("robotomy creation", "fail");
        (void)test_fail_1;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::cout << *test_Sh;
    std::cout << *test_P;
    std::cout << *test_R;
    

    try
    {
        a.signForm(*test_Sh);
        a.excuteForm(*test_Sh);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        a.signForm(*test_R);
        a.excuteForm(*test_R);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        a.signForm(*test_P);
        a.excuteForm(*test_P);
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