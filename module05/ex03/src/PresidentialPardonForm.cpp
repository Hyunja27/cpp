#include "PresidentialPardonForm.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{}
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: Form("PresidentialPardonForm", 25, 5)
{
	/* constructor code */
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
: Form("PresidentialPardonForm", 25, 5)
{
	/* copy-constructor code */
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

PresidentialPardonForm::~PresidentialPardonForm()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this == &obj)
		return (*this);
	/* overload= code */
	this->_isSigned = obj._isSigned;
	this->_target = obj._target;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const PresidentialPardonForm& presidentialPardonForm)
// {
// 	/* ostream output overload code */
// 	return (out);
// }

/* ************************************************************************** */
/* --------------------------------- GETTER --------------------------------- */
/* ************************************************************************** */

/* getter code */

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
void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	std::cout << "<" << this->_target << "> has been pardoned by Zafod Beeblebrox." <<std::endl;
}