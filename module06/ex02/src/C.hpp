#ifndef C_HPP
# define C_HPP

# include <string>
# include <iostream>
# include "Base.hpp"

class C : public Base
{
	private:
		/* declare member variable */
	public:
		C();
		C(const std::string& /* parameter */, ...);
		C(const C& copy);
		C& operator=(const C& obj);
		virtual ~C();

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const C& c);

#endif
