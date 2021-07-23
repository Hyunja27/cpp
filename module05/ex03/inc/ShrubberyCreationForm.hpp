#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		/* declare member variable */
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& _target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
		virtual ~ShrubberyCreationForm();

		/* declare member function */
		void execute(Bureaucrat const & executor);

		class NoFileException :public std::exception
		{
			public:
				virtual	const char*	what() const throw();
		};
		class FileCreationException :public std::exception
		{
			public:
				virtual	const char*	what() const throw();
		};
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const ShrubberyCreationForm& shrubberyCreationForm);

#endif
