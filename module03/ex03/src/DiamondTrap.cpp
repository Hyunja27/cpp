#include "DiamondTrap.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

DiamondTrap::DiamondTrap() 
{
	this->Fragtrap::set_Hit_point(100);
	this->Scavtrap::set_Energy_point(50);
	this->Fragtrap::set_Attack_damage(30);
}

DiamondTrap::DiamondTrap(const std::string& string) : Claptrap(string + "_clap_name")
{
	/* constructor code */
	std::cout << "name:<" << string << "> Borned !" << std::endl;
	this->_name = string;
	// this->set_Name(string + "_clap_name");
	this->Fragtrap::set_Hit_point(100);
	this->Scavtrap::set_Energy_point(50);
	this->Fragtrap::set_Attack_damage(30);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	this->operator=(copy);
	this->Fragtrap::set_Hit_point(100);
	this->Scavtrap::set_Energy_point(50);
	this->Fragtrap::set_Attack_damage(30);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destroyed. Named <" << this->_name << "> !" << std::endl;
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	if (this == &obj)
		return (*this);
	this->_name= obj._name;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const DiamondTrap& diamondTrap)
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

void DiamondTrap::whoAmI()
{
	std::cout << "My Name is <" << this->_name << "> !" << std::endl;
	std::cout << "My Mother's Name is <" << Claptrap::get_Name() << "> !" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	Scavtrap::attack(target);
	// std::cout << "Diamond_Style Attack! <" << this->_name << "> attacks <" << target << ">, causing <" << this->Attack_damage << "> points of damage!" << std::endl;
}