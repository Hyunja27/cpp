#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:
		/* declare member variable */
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& copy);
		TacticalMarine& operator=(const TacticalMarine& obj);
		virtual ~TacticalMarine();

		/* declare member function */
        ISpaceMarine* clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const TacticalMarine& tacticalMarine);

#endif
