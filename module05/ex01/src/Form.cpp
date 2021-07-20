#include "Form.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Form::Form() : _name("Empty"), _signGrade(1), _excuteGrade(1), _isSigned(false)
{	
}

Form::Form(const std::string& name, int signGrade, int excuteGrade)
: _name(name), _signGrade(signGrade), _excuteGrade(excuteGrade), _isSigned(false)
{
}

Form::Form(const Form& copy)
:_name(copy.getName()), _signGrade(copy.getSignGrade()), _excuteGrade(copy.getExecuteGrade()), _isSigned(copy.getisSigned())
{
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Form::~Form()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Form& Form::operator=(const Form& obj)
{
	if (this == &obj)
		return (*this);
	this->_isSigned = obj._isSigned;
	return (*this);
}

std::ostream&
operator<<(std::ostream& out, const Form& form)
{
	/* ostream output overload code */
	out << "<" << form.getName() << "> status : <" << std::boolalpha << form.getisSigned() << "> !" << std::endl;
	return (out);
}

/* ************************************************************************** */
/* --------------------------------- GETTER --------------------------------- */
/* ************************************************************************** */

/* getter code */
std::string Form::getName() const
{
	return (this->_name);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecuteGrade() const
{
	return (this->_excuteGrade);
}

bool Form::getisSigned() const
{
	return (this->_isSigned);
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
void Form::beSigned(Bureaucrat& obj)
{
	if (this->getSignGrade() >= obj.getGrade())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat GradeError: Grade too High!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat GradeError: Grade too Low!");
}