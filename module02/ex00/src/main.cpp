/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 16:24:14 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	srand((unsigned int)time(NULL));
    
    Zombie *zom_a;
    Zombie *zom_b;

    std::cout << "[New_zombie!]" << std::endl;
    zom_a = newZombie("jaeskim");
    zom_b = newZombie("skim");
    zom_a->announce();
    zom_b->announce();
    std::cout << "<kill all zombie!>" << std::endl;
    delete(zom_a);
    delete(zom_b);
    std::cout << "[Random_zombie1!]" << std::endl;
    randomChump("jaeskim");
    randomChump("skim");
    std::cout << "[Random_zombie2!]" << std::endl;
    randomChump("jaeskim");
    randomChump("skim");
    std::cout << "[Random_zombie3!]" << std::endl;
    randomChump("jaeskim");
    randomChump("skim");
    std::cout << "[Random_zombie4!]" << std::endl;
    randomChump("jaeskim");
    randomChump("skim");

    return (0);
}