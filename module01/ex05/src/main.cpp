/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/16 09:30:46 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "Karen.hpp"

int main(void)
{
    Karen K;

    std::cout << "[input \"debug\"] " << std::endl;
    K.complain("debug");
    std::cout << std::endl;

    std::cout << "[input \"info\"] " << std::endl;
    K.complain("info");
    std::cout << std::endl;

    std::cout << "[input \"warning\"] " << std::endl;
    K.complain("warning");
    std::cout << std::endl;

    std::cout << "[input \"error\"] " << std::endl;
    K.complain("error");
    std::cout << std::endl;

    std::cout << "[input \"apple\"] " << std::endl;
    K.complain("apple");
    std::cout << std::endl;

    std::cout << "[input \"skim\"] " << std::endl;
    K.complain("skim");
    std::cout << std::endl;
	
	std::cout << "[input \"spark\"] " << std::endl;
    K.complain("spark");
    std::cout << std::endl;
    
    return (0);
}