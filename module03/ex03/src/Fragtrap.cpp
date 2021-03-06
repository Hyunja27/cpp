#include "Fragtrap.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Fragtrap::Fragtrap() 
{
	this->set_Hit_point(100);
	this->set_Energy_point(100);
	this->set_Attack_damage(30);
}

Fragtrap::Fragtrap(const std::string& string)
{
	std::cout << "FragTrap name <" << string << "> Borned !" << std::endl;
	this->set_Name(string);
	this->set_Hit_point(100);
	this->set_Energy_point(100);
	this->set_Attack_damage(30);
}

Fragtrap::Fragtrap(const Fragtrap& copy)
{
	this->operator=(copy);
	this->set_Hit_point(100);
	this->set_Energy_point(100);
	this->set_Attack_damage(30);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Fragtrap::~Fragtrap()
{
	std::cout << "Fragtrap Destroyed. Named <" << this->_name << "> !" << std::endl;
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Fragtrap& Fragtrap::operator=(const Fragtrap& obj)
{
	if (this == &obj)
		return (*this);
	/* overload= code */
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const Fragtrap& fragtrap)
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
void Fragtrap::highFivesGuys(void)
{
	std::cout << "FragTrap <" << this->_name << "> Try to Happy HighFive!! " << std::endl;	
}

void Fragtrap::attack(std::string const & target)
{
	std::cout << "Frag_Style Attack! <" << this->_name << "> attacks <" << target << ">, causing <" << this->Attack_damage << "> points of damage!" << std::endl;
}