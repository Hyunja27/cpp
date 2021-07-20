#include "Bureaucrat.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Bureaucrat::Bureaucrat() : _name("Noname")
{}
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	this->_grade = grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	this->operator=(copy);
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Bureaucrat::~Bureaucrat()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this == &obj)
		return (*this);

	this->_grade = obj._grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return (*this);
}

std::ostream&
operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">";
	return (out);
}

/* ************************************************************************** */
/* --------------------------------- GETTER --------------------------------- */
/* ************************************************************************** */

/* getter code */
int	Bureaucrat::getGrade() const
{
	return(this->_grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

/* ************************************************************************** */
/* --------------------------------- SETTER --------------------------------- */
/* ************************************************************************** */

/* setter code */

/* ************************************************************************** */
/* ------------------------------- EXCEPTION -------------------------------- */
/* ************************************************************************** */

/* exception code */

/* ************************************************************************** */
/* ---------------------------- MEMBER FUNCTION ----------------------------- */
/* ************************************************************************** */
void Bureaucrat::increaseGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decreaseGrade(void)
{
	this->_grade++;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat GradeError: Grade too High!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat GradeError: Grade too Low!");
}

void Bureaucrat::signForm(Form& form)
{
	if (this->getGrade() > form.getSignGrade())
	{
		std::cout << "<" << this->getName() << "> cannot sign <" << form.getName() << "> because <Grade Too Low>" << std::endl;
		throw Form::GradeTooLowException();
	}
	else if (form.getSignGrade() >= this->getGrade())
	{
		std::cout << "<" << this->getName() << "> signs <" << form.getName() << ">" << std::endl;
		form.beSigned(*this);
	}
}

void Bureaucrat::excuteForm(Form& form)
{
	if (this->getGrade() > form.getExecuteGrade())
	{
		std::cout << "<" << this->getName() << "> cannot Execute <" << form.getName() << "> because <Grade Too Low>" << std::endl;
		throw Form::GradeTooLowException();
	}
	else if (form.getSignGrade() >= this->getGrade())
	{
		std::cout << "<" << this->getName() << "> Excute <" << form.getName() << ">" << std::endl;
		form.beExcuted(*this);
	}
}