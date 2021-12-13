#include "Victim.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Victim::Victim() {}
Victim::Victim(const std::string& _name)
{
	/* constructor code */
	this->_name = _name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& copy)
{
	/* copy-constructor code */
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Victim::~Victim()
{
	/* destructor code */
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Victim& Victim::operator=(const Victim& obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	return (*this);
}

std::ostream&
operator<<(std::ostream& out, const Victim& victim)
{
	/* ostream output overload code */
	out << "I'm " << victim.get_name() << "  and I like otters!" << std::endl;
	return (out);
}

/* ************************************************************************** */
/* --------------------------------- GETTER --------------------------------- */
/* ************************************************************************** */

/* getter code */
std::string Victim::get_name(void) const
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
void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}