#include "Cure.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& copy) : AMateria("cure")
{
	/* copy-constructor code */
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Cure::~Cure()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Cure& Cure::operator=(const Cure& obj)
{
	if (this == &obj)
		return (*this);
	this->_type = obj._type;
	this->_xp = obj._xp;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const Cure& cure)
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
AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}