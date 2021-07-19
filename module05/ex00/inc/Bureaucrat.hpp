#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& obj);
		virtual ~Bureaucrat();

		/* declare member function */
		int	getGrade() const;
		std::string	getName() const;
		void increaseGrade(void);
		void decreaseGrade(void);
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
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
