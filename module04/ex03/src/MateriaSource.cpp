#include "MateriaSource.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

MateriaSource::MateriaSource() 
{
	int i = 0;
	while(i < 4)
		this->_learned[i++] = 0;
	this->_learned_num = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

MateriaSource::~MateriaSource()
{
	/* destructor code */
	int i = 0;
	while(i < 4)
	{
		if (this->_learned[i] != 0)
			delete(this->_learned[i]);
		i++;
	}
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	int i = 0;

	this->_learned_num= obj._learned_num;
	while (i < this->_learned_num)
	{
		this->_learned[i] = obj._learned[i]->clone();
		i++;
	}
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const MateriaSource& materiaSource)
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
void MateriaSource::learnMateria(AMateria* m)
{
	if (this->_learned_num == 3 || m == NULL)
	{
		throw std::runtime_error("Cannot learnning anything.");
		return ;
	}
	this->_learned[this->_learned_num] = m->clone();
	this->_learned_num++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < this->_learned_num)
	{
		if (this->_learned[i]->getType() == type)
			return (this->_learned[i]->clone());
		i++;
	}
	return (NULL);
}