#include "AMateria.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

AMateria::AMateria() {}
AMateria::AMateria(const std::string& type)
{
	this->_xp = 0;
	if (type == "Ice" || type == "ICE")
		this->_type = "ice";
	else if (type == "Cure" || type == "CURE")
		this->_type = "cure";
	else
		this->_type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	this->_xp = copy._xp;
	this->_type = copy._type;
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

AMateria::~AMateria()
{
	/* destructor code */

}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

AMateria& AMateria::operator=(const AMateria& obj)
{
	if (this == &obj)
		return (*this);
	this->_xp = obj._xp;
	this->_type= obj._type;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const AMateria& aMateria)
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
std::string const & AMateria::getType() const
{
	return (_type);
}

// AMateria* AMateria::clone() const
// {
// 	return (new AMateria(*this));
// }

// void use(ICharacter& target);