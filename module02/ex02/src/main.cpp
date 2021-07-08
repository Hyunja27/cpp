/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 17:08:07 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    std::cout << "[Display the address in memory of the string]" << std::endl;
    std::cout << &string << std::endl << std::endl;
    
    std::cout << "[Display the address of the string by using stringPTR and stringREF]" << std::endl;
    std::cout << "stringPTR: "<< &stringPTR << std::endl;
    std::cout << "stringREF: "<< &stringREF << std::endl << std::endl;

    std::cout << "[Display string using the pointer]" << std::endl;
    std::cout << "stringPTR: "<< *stringPTR << std::endl << std::endl;

    std::cout << "[Display using the reference]" << std::endl;
    std::cout << "stringREF: "<< stringREF << std::endl << std::endl;

    return (0);
}