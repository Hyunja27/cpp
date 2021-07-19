#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
		/* declare member variable */
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& copy);
		SuperMutant& operator=(const SuperMutant& obj);
		virtual ~SuperMutant();

		/* declare member function */
		void takeDamage(int damage);
};

/* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const SuperMutant& superMutant);

#endif
