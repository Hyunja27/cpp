#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"
# include "ZombieEvent.hpp"

class ZombieHorde
{
	private:
		Zombie **horde;
		/* declare member variable */
	public:
		ZombieHorde(int N);
		// ~ZombieHorde();
		/* declare member function */
};

#endif
