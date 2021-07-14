/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/14 15:24:31 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int main( void ) {

    Claptrap A("Num_A");
    Claptrap B("Num_B");
    Scavtrap C("Grr_C");
    Scavtrap D("Grr_D");
    
    A.attack("You");
    B.attack("Num_A");
    
    
    C.attack("Num_B");
    D.attack("Num_C");

    A.takeDamage(0);
    A.beRepaired(0);
    
    C.takeDamage(20);
    C.beRepaired(20);

    D.guardGate();
    
    return 0;
}