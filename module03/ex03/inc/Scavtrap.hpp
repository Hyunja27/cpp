#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "Claptrap.hpp"

class Scavtrap : virtual public Claptrap
{
	private:

	public:
		Scavtrap();
		Scavtrap(const std::string& string);
		Scavtrap(const Scavtrap& copy);
		~Scavtrap();
		Scavtrap& operator=(const Scavtrap& obj);
		/* declare member function */
		void guardGate();
		virtual void attack(std::string const & target);
};

/* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Scavtrap& scavtrap);

#endif
