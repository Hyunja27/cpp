#include "Character.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Character::Character() 
{
	this->_name = "Noname";
	this->_ap = 40;
	this->Primary_weapon = 0;
}
Character::Character(std::string const & name)
{
	this->_name = name;
	this->_ap = 40;
	this->Primary_weapon = 0;
}

Character::Character(const Character& copy)
{
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Character::~Character()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Character& Character::operator=(const Character& obj)
{
	if (this == &obj)
		return (*this);
	this->_name= obj._name;
	this->_ap = obj._ap;
	this->Primary_weapon = obj.Primary_weapon;
	return (*this);
}

std::ostream&
operator<<(std::ostream& out, const Character& character)
{
	/* ostream output overload code */
	if (character.getWeapon() == 0)
		std::cout << character.getName() << " has AP_NUMBER " << character.getAP()  << " and is unarmed" << std::endl;
	else
		out << character.getName() << " has AP_NUMBER " << character.getAP() << " and wields a " << character.getWeapon()->getName() << std::endl;
	return (out);
}

/* ************************************************************************** */
/* --------------------------------- GETTER --------------------------------- */
/* ************************************************************************** */

/* getter code */
std::string Character::getName() const
{
	return (this->_name);
}

int Character::getAP() const
{
	return (this->_ap);
}

AWeapon* Character::getWeapon() const
{
	return (this->Primary_weapon);
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
void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon* weapon)
{
	// if (this->Primary_weapon != 0)
	this->Primary_weapon = weapon;
	// else
	// 	std::cout << this->_name << " has AP_NUMBER " << this->_ap << " and is unarmed" << std::endl;
}

void Character::attack(Enemy* enemy)
{
	if (this->Primary_weapon == 0 || ((this->_ap) < this->Primary_weapon->getAPCost()))
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->Primary_weapon->getName() << std::endl;
	this->Primary_weapon->attack();
	enemy->takeDamage(this->Primary_weapon->getDamage());
	this->_ap -= this->Primary_weapon->getAPCost();
	if (enemy->getHP() <= 0)
		delete(enemy);
}