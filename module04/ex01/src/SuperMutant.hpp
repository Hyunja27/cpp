#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include <string>
# include <iostream>

class SuperMutant
{
	private:
		/* declare member variable */
	public:
		SuperMutant();
		SuperMutant(const std::string& /* parameter */, ...);
		SuperMutant(const SuperMutant& copy);
		SuperMutant& operator=(const SuperMutant& obj);
		virtual ~SuperMutant();

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const SuperMutant& superMutant);

#endif
