#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "Claptrap.hpp"

class Fragtrap : virtual public Claptrap
{
	private:

	public:
		Fragtrap();
		Fragtrap(const std::string& string);
		Fragtrap(const Fragtrap& copy);
		Fragtrap& operator=(const Fragtrap& obj);
		~Fragtrap();

		/* declare member function */
		void highFivesGuys(void);
		virtual void attack(std::string const & target);
};

/* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Fragtrap& fragtrap);

#endif
