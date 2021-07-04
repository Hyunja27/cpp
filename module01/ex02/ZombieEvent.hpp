/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:20:41 by spark             #+#    #+#             */
/*   Updated: 2021/07/04 18:05:30 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();
		static std::string setZombieType(void);
		static Zombie* newZombie(std::string _name);
		static Zombie* randomChump(void);
		/* declare member function */
};

#endif
