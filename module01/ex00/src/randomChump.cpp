/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:53:51 by spark             #+#    #+#             */
/*   Updated: 2021/07/15 23:20:21 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
