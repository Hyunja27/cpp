/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/28 15:41:43 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Claptrap.hpp"

int main( void ) {

    Claptrap A("Test_A");
    Claptrap B("Test_B");
    
    A.attack("You");
    B.attack("Test_A");

    A.takeDamage(B.get_Attack_damage());
    A.beRepaired(0);

    return 0;
}