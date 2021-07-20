#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Intern
{
	private:
		/* declare member variable */
	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& obj);
		virtual ~Intern();

		/* declare member function */
		// 여기서부터 짤것!//
		Form* makeForm(const std::string& _form_name, const std::string& _target);
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Intern& intern);

#endif
