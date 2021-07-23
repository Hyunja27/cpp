#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		/* declare member variable */
		Peon();

	public:
		Peon(const std::string& _name);
		Peon(const Peon& copy);
		Peon& operator=(const Peon& obj);
		virtual ~Peon();

		/* declare member function */
		void getPolymorphed() const;
};

// /* global operator overload */

#endif
