#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		/* declare member variable */
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		virtual ~PresidentialPardonForm();

		/* declare member function */
		void execute(Bureaucrat const & executor);
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const PresidentialPardonForm& presidentialPardonForm);

#endif
