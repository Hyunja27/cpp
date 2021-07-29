#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		/* declare member variable */
		unsigned int _xp;
		std::string _type;

	public:
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& obj);
		virtual ~AMateria();

		/* declare member function */
		std::string const & getType() const; //Returns the materia type unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0; 
		virtual void use(ICharacter& target) = 0;
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const AMateria& aMateria);


#endif
