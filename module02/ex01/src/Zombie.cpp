/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:53:51 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 20:22:13 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Zombie::Zombie(void) 
{
	
}

Zombie::Zombie(std::string _name) 
{
	name = _name;
}

Zombie::~Zombie()
{
	/* destructor code */
	std::cout << name << " is down.!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << name << ">BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string _name)
{
	std::string set[11];
	set[0] = "Skim";
	set[1] = "Jaeskim";
	set[2] = "Yjung";
	set[3] = "Hyunlee";
	set[4] = "Spark";
	set[5] = "Jaemkim";
	set[6] = "Hkwon";
	set[7] = "Michoi";
	set[8] = "Mr.Polabear";
	set[9] = "Lee_min_Suck";
	set[10] = _name;

	int tmp = rand() % 11;
	Zombie *zom = new Zombie(set[tmp]);
	zom->announce();
	delete (zom);
}

Zombie* newZombie(std::string _name)
{
	return (new Zombie(_name));
}