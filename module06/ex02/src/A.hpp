#ifndef A_HPP
# define A_HPP

# include <string>
# include <iostream>
# include "Base.hpp"

class A : public Base
{
	private:
		/* declare member variable */
	public:
		A();
		A(const std::string& /* parameter */, ...);
		A(const A& copy);
		A& operator=(const A& obj);
		virtual ~A();

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const A& a);

#endif
