#include "Claptrap.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Claptrap::Claptrap() 
{
	// std::cout << "Default Clap is Borned !" << std::endl;
	this->Hit_point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
}

Claptrap::Claptrap(const std::string& string)
{
	std::cout << "name:<" << string << "> Borned !" << std::endl;
	this->_name = string;
	this->Hit_point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
}

Claptrap::Claptrap(const Claptrap& copy)
{
	this->operator=(copy);
	this->Hit_point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Claptrap::~Claptrap()
{
	std::cout << "Claptrap Destroyed. Named <" << this->_name << "> !" << std::endl;
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Claptrap& Claptrap::operator=(const Claptrap& obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->Hit_point= obj.Hit_point;
	this->Energy_point = obj.Energy_point;
	this->Attack_damage = obj.Attack_damage;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const Claptrap& claptrap)
// {
// 	/* ostream output overload code */
// 	return (out);
// }

/* ************************************************************************** */
/* --------------------------------- GETTER --------------------------------- */
/* ************************************************************************** */

/* getter code */


unsigned int Claptrap::get_Hit_point()
{
	return (this->Hit_point);
}

unsigned int Claptrap::get_Energy_point()
{
	return (this->Energy_point);
}

unsigned int Claptrap::get_Attack_damage()
{
	return (this->Attack_damage);
}

std::string Claptrap::get_Name()
{
	return (this->_name);
}

/* ************************************************************************** */
/* --------------------------------- SETTER --------------------------------- */
/* ************************************************************************** */

/* setter code */
void Claptrap::set_Hit_point(unsigned int num)
{
	this->Hit_point = num;
}

void Claptrap::set_Energy_point(unsigned int num)
{
	this->Energy_point = num;
}

void Claptrap::set_Attack_damage(unsigned int num)
{
	this->Attack_damage = num;
}

void Claptrap::set_Name(std::string str)
{
	this->_name = str;
}

/* ************************************************************************** */
/* ------------------------------- EXCEPTION -------------------------------- */
/* ************************************************************************** */

/* exception code */

/* ************************************************************************** */
/* ---------------------------- MEMBER FUNCTION ----------------------------- */
/* ************************************************************************** */

void Claptrap::attack(std::string const & target)
{
	std::cout << "Clap_Style Attack! <" << this->_name << "> attacks <" << target << ">, causing <" << this->Attack_damage << "> points of damage!" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->_name << "> take <" << amount << "> damage !! Dame...! " << std::endl;
	if (this->Hit_point > 0)
		this->Hit_point = this->Hit_point - amount;
}

void Claptrap::beRepaired(unsigned int amount)
{
	std::cout << "<" << this->_name << "> Repaired <" << amount << "> Point !! Hi----ha...! " << std::endl;
	if (this->Hit_point > 0)
		this->Hit_point = this->Hit_point + amount;
}