#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:
		/* declare member variable */
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator& copy);
		AssaultTerminator& operator=(const AssaultTerminator& obj);
		virtual ~AssaultTerminator();

		/* declare member function */
		ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const AssaultTerminator& assaultTerminator);

#endif
