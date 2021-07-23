#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		/* declare member variable */
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& _target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
		virtual ~RobotomyRequestForm();

		/* declare member function */
		void execute(Bureaucrat const & executor);
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const RobotomyRequestForm& robotomyRequestForm);

#endif
