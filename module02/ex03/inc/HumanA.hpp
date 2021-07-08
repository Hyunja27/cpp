#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		/* declare member variable */
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string _name, Weapon& _weapon);
		/* declare member function */
		void attack();
};

#endif
