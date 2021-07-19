#include "AssaultTerminator.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

AssaultTerminator::AssaultTerminator() 
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& copy)
{
	std::cout << "* teleports from space *" << std::endl;
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

AssaultTerminator::~AssaultTerminator()
{
	/* destructor code */
	std::cout << "I’ll be back..." << std::endl;
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& obj)
{
	if (this == &obj)
		return (*this);
	/* overload= code */
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const AssaultTerminator& assaultTerminator)
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
ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *tmp =	new AssaultTerminator;

	*tmp = *this;
	return (tmp);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainﬁsts *" << std::endl;
}