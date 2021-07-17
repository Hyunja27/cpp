#include "TacticalMarine.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

TacticalMarine::TacticalMarine() 
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& copy)
{
	this->operator=(copy);
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

TacticalMarine::~TacticalMarine()
{
	/* destructor code */
	std::cout << "Aaargh..." << std::endl;
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

TacticalMarine& TacticalMarine::operator=(const TacticalMarine& obj)
{
	if (this == &obj)
		return (*this);
	/* overload= code */
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const TacticalMarine& tacticalMarine)
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
ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *tmp =	new TacticalMarine;

	*tmp = *this;
	return (tmp);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}