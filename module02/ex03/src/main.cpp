/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 17:32:34 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"
# include "Weapon.hpp"

int main(void)
{
    {
        Weapon        club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club"); bob.attack();
    }
    {
        Weapon        club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club"); jim.attack();
    }
    return (0);
}