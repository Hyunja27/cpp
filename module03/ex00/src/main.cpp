/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/14 14:02:23 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Claptrap.hpp"

int main( void ) {

    Claptrap A("Num_A");
    Claptrap B("Num_B");
    
    A.attack("You");
    B.attack("Num_A");

    A.takeDamage(0);
    A.beRepaired(0);

    return 0;
}