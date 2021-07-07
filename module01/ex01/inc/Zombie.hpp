/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:53:53 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 16:40:31 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string _name);
		~Zombie();
		/* declare member function */
		void announce(void);
};

Zombie* newZombie(std::string _name);
void randomChump(std::string _name);
Zombie* zombieHorde( int N, std::string name );

#endif
