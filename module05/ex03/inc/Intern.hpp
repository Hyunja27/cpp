#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		/* declare member variable */
		Form* sh_PTR;
		Form* pres_PTR;
		Form* rob_PTR;
		Form* form_book[3];

	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& obj);
		virtual ~Intern();

		/* declare member function */
		Form* makeForm(const std::string& _form_name, const std::string& _target);
		class NoExitFormException :public std::exception
		{
			public:
				virtual	const char*	what() const throw();
		};
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Intern& intern);

#endif
