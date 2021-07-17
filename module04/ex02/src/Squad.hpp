#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
		/* declare member variable */
		int _count;
		ISpaceMarine** all;

	public:
		Squad();
		Squad(const Squad& copy);
		Squad& operator=(const Squad& obj);
		virtual ~Squad();

		/* declare member function */
		int getCount() const;
		ISpaceMarine* getUnit(int num) const;
		int push(ISpaceMarine*);
		
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Squad& squad);

#endif
