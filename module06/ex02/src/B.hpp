#ifndef B_HPP
# define B_HPP

# include <string>
# include <iostream>
# include "Base.hpp"

class B : public Base
{
	private:
		/* declare member variable */
	public:
		B();
		B(const std::string& /* parameter */, ...);
		B(const B& copy);
		B& operator=(const B& obj);
		virtual ~B();

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const B& b);

#endif
