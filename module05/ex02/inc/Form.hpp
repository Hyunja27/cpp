#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		/* declare member variable */
		const std::string _name;
		const int _signGrade;
		const int _excuteGrade;
		bool _isSigned;

	public:
		Form();
		Form(const std::string& name, int signGrade, int excuteGrade);
		Form(const Form& copy);
		Form& operator=(const Form& obj);
		virtual ~Form();

		/* declare member function */

		// Form::GradeTooHighException

		std::string getName() const;
		int	getSignGrade() const;
		int getExecuteGrade() const;
		bool getisSigned() const;
		void beSigned(Bureaucrat& obj);
		void beExcuted(Bureaucrat& obj);
		virtual void execute(Bureaucrat const & executor) = 0;

		class GradeTooHighException :public std::exception
		{
			public:
				virtual	const char*	what() const throw();
		};
		class GradeTooLowException :public std::exception
		{
			public:
				virtual	const char*	what() const throw();
		};
		class NotSignedException :public std::exception
		{
			public:
				virtual	const char*	what() const throw();
		};
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
