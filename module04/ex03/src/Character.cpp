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
	this->_materia_num = 0;
	this->_table_num = 0;
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = 0;
		i++;
	}
}
Character::Character(const std::string& _name)
{
	this->_name = _name;
	this->_materia_num = 0;
	this->_table_num = 0;
	int i = 0;
	while (i < 4)
	{
		this->_inventory[i] = 0;
		i++;
	}
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
	int i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != 0)
			delete(this->_inventory[i]);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		if (this->_table[i] != 0)
			delete(this->_table[i]);
		i++;
	}
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Character& Character::operator=(const Character& obj)
{
	int i = 0;

	this->_name= obj._name;
	this->_materia_num = obj._materia_num;
	while (i < this->_materia_num)
	{
		this->_inventory[i] = obj._inventory[i]->clone();
		i++;
	}
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const Character& character)
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
std::string const & Character::getName() const
{
	return (this->_name);	
}

void Character::equip(AMateria* m)
{
	if (this->_materia_num == 3 || m == NULL)
	{
		throw std::runtime_error("Cannot equip anything.");
		return ;
	}
	this->_inventory[this->_materia_num] = m->clone();
	this->_materia_num++;
}

void Character::unequip(int idx)
{
	if (idx > this->_materia_num || idx < 0)
	{
		throw std::runtime_error("unequip impossible.");
		return ;
	}
	this->_table[this->_table_num++] = this->_inventory[idx];
	if (this->_table_num == 10)
	{
		throw std::runtime_error("unequipped materia is 10!, table Browken!");
		return ;
	}	
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx] == NULL)
	{
		throw std::runtime_error("This slot is Empty!");
		return ;
	}
	this->_inventory[idx]->use(target);
}