/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/04 19:31:04 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	srand((unsigned int)time(NULL));
    
    Zombie *zom_a;
    Zombie *zom_b;
    
    Zombie jaeskim = Zombie("coding_idol(human)", "jaeskim");
    Zombie skim = Zombie("game_freak(human)", "skim");
    
    jaeskim.announce();
    skim.announce();
    std::cout << "[New_zombie!]" << std::endl;
    zom_a = ZombieEvent::newZombie("jaeskim");
    zom_b = ZombieEvent::newZombie("skim");
    zom_a->announce();
    zom_b->announce();
    std::cout << "<kill all zombie!>" << std::endl;
    delete(zom_a);
    delete(zom_b);
    std::cout << "[Random_zombie1!]" << std::endl;
    zom_a = ZombieEvent::randomChump();
    zom_b = ZombieEvent::randomChump();
    std::cout << "<kill all zombie!>" << std::endl;
    delete(zom_a);
    delete(zom_b);
    std::cout << "[Random_zombie2!]" << std::endl;
    zom_a = ZombieEvent::randomChump();
    zom_b = ZombieEvent::randomChump();
    std::cout << "<kill all zombie!>" << std::endl;
    delete(zom_a);
    delete(zom_b);
    std::cout << "[Random_zombie3!]" << std::endl;
    zom_a = ZombieEvent::randomChump();
    zom_b = ZombieEvent::randomChump();
    std::cout << "<kill all zombie!>" << std::endl;
    delete(zom_a);
    delete(zom_b);
    std::cout << "[Random_zombie4!]" << std::endl;
    zom_a = ZombieEvent::randomChump();
    zom_b = ZombieEvent::randomChump();
    std::cout << "<kill all zombie!>" << std::endl;
    delete(zom_a);
    delete(zom_b);
    return (0);
}