#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
		/* declare member variable */
	public:
		Cure();
		Cure(const Cure& copy);
		Cure& operator=(const Cure& obj);
		virtual ~Cure();

		/* declare member function */
		AMateria* clone() const;
		void use(ICharacter& target);
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Cure& cure);

#endif
