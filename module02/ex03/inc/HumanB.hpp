#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		/* declare member variable */
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string _name);
		void setWeapon(Weapon& _weapon);
		/* declare member function */
		void attack();
};

#endif