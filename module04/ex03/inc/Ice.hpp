#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
		/* declare member variable */
	public:
		Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& obj);
		virtual ~Ice();

		/* declare member function */
		AMateria* clone() const;
		void use(ICharacter& target);
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Ice& ice);

#endif
