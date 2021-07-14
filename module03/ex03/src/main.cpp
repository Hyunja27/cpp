/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/14 18:38:36 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {

    Claptrap A("Num_A");
    Claptrap B("Num_B");
    Scavtrap C("Grr_C");
    Scavtrap D("Grr_D");
    Fragtrap E("Fra_E");
    Fragtrap F("Fra_F");
    DiamondTrap G("Super_Diamond");

    G.whoAmI();
    
    A.attack("You");
    B.attack("Num_A");
    
    C.attack("Num_B");
    D.attack("Num_C");

    E.attack("You");
    F.attack("You");

    G.attack("you");
    G.attack("NUM_A");
    G.attack("SELF");
    
    G.whoAmI();
    
    A.takeDamage(0);
    A.beRepaired(0);
    
    C.takeDamage(20);
    C.beRepaired(20);

    D.guardGate();

    E.takeDamage(40);
    E.beRepaired(40); 

    E.highFivesGuys();
    F.highFivesGuys();
    G.whoAmI();
    
    return 0;
}
