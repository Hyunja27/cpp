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
PresidentialPardonForm::PresidentialPardonForm(const std::string& name)
: Form(name, 25, 5)
{
	/* constructor code */
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
	std::cout << "<" << executor.getName() << "> has been pardoned by Zafod Beeblebrox." <<std::endl;
}