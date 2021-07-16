#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include <string>
# include <iostream>
# include "Claptrap.hpp"
# include "Scavtrap.hpp"
# include "Fragtrap.hpp"

class DiamondTrap : public Scavtrap, public Fragtrap
{
	private:
		/* declare member variable */
		std::string _name;
		
	public:
		DiamondTrap();
		DiamondTrap(const std::string& string);
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap& operator=(const DiamondTrap& obj);
		~DiamondTrap();
		void whoAmI();
		virtual void attack(std::string const & target);
};

/* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const DiamondTrap& diamondTrap);

#endif
