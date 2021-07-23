#include "Intern.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Intern::Intern() {}

Intern::Intern(const Intern& copy)
{
	/* copy-constructor code */
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Intern::~Intern()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Intern& Intern::operator=(const Intern& obj)
{
	if (this == &obj)
		return (*this);
	int i = -1;
	this->sh_PTR = obj.sh_PTR;
	this->pres_PTR = obj.pres_PTR;
	this->rob_PTR = obj.rob_PTR;
	while(++i < 3)
		this->form_book[i] = obj.form_book[i];
	return (*this);
}

std::ostream&
operator<<(std::ostream& out, const Intern& intern)
{
	/* ostream output overload code */
	out << "Intern creates <" << "Form?" << ">";
	(void)intern;
	return (out);
}

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
Form* Intern::makeForm(const std::string& _form_name, const std::string& _target)
{
	int i = -1;
	int j = 0;
	int	ok = 0;

	sh_PTR = new ShrubberyCreationForm(_target);
	pres_PTR = new PresidentialPardonForm(_target);
	rob_PTR = new RobotomyRequestForm(_target);

	form_book[0] = sh_PTR;
	form_book[1] = pres_PTR;
	form_book[2] = rob_PTR;

	std::string form_kind[4] = 
	{
		"shrubbery creation",
		"presidential request",
		"robotomy request"
	};

	while (++i < 3)
	{
		if (_form_name == form_kind[i])
		{
			j = i;
			ok =1;
			std::cout << "Intern creates <" << _form_name << ">" << std::endl;
		}
	}
	if (ok == 0)
		throw NoExitFormException();
	i = -1;
	while (++i < 3)
		if (i != j)
			delete(form_book[i]);
	return (form_book[j]);
}

const char* Intern::NoExitFormException::what() const throw()
{
	return ("Intern is Down! : Form_Name is not Exist! What's this ??");
}
