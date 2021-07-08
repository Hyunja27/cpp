/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 20:06:30 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	srand((unsigned int)time(NULL));
    
    Zombie *zom_horde;
    
    std::cout << "[Make_zombie_Horde!]" << std::endl;
    
    zom_horde = zombieHorde(50, "spark");
    delete[] zom_horde;

    return (0);
}