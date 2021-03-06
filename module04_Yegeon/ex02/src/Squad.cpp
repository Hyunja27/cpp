#include "Squad.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Squad::Squad() 
{
	this->all = 0;
	this->_count = 0;
}

Squad::Squad(const Squad& copy) /* copy-constructor initialize list */
{
	this->all = 0;
	this->_count = 0;
	
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Squad::~Squad()
{
	int i = 0;
	/* destructor code */
	if (this->all != 0)
	{
		i = -1;
		while (++i < this->_count)
			delete(this->all[i]);
		delete(all);
	}
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Squad& Squad::operator=(const Squad& obj)
{
	if (this == &obj)
		return (*this);
	int i = -1;
	if (this->all)
	{
		while (++i < this->_count)
			delete(this->all[i]);
		delete(all);
		this->all = 0;
	}
	this->_count = 0;
	i = -1;
	while (++i < obj._count)
		this->push(obj.all[i]->clone());
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const Squad& squad)
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
int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int num) const
{
	return (this->all[num]);
}

int Squad::push(ISpaceMarine* new_man)
{
	if (new_man == 0)
	{
		std::cout << "this man is Null man!" << std::endl;
		return (-1);
	}
	if (this->all != 0)
	{
		int i = -1;
		while (this->all[++i])
			if (new_man == this->all[i])
			{
				std::cout << "this man already our Crew!" << std::endl;
				return (-1);
			}
	}
	this->_count++;
	if (this->all == 0)
		this->all = new ISpaceMarine*[this->_count];
	else
	{
		delete(this->all);
		this->all = new ISpaceMarine*[this->_count];
	}
	this->all[(this->_count - 1)] = new_man;
	return (this->_count);
}