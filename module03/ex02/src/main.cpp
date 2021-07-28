/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/28 16:55:40 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"

int main( void ) {

    // Claptrap A("Num_A");
    // Claptrap B("Num_B");
    // Scavtrap C("Grr_C");
    // Scavtrap D("Grr_D");
    Fragtrap E("Fra_E");
    Fragtrap F("Fra_F");
    
    
    // A.attack("You");
    // B.attack("Num_A");
    
    
    // C.attack("Num_B");
    // D.attack("Num_C");

    E.attack("You");
    F.attack("You");

    // A.takeDamage(0);
    // A.beRepaired(0);
    
    // C.takeDamage(20);
    // C.beRepaired(20);

    // D.guardGate();

    E.takeDamage(40);
    E.beRepaired(40); 

    E.highFivesGuys();
    F.highFivesGuys();
    
    return 0;
}