#include "Serializer.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Serializer::Serializer() 
{
	this->_raw_data = 0;
}

// Serializer::Serializer(/* constructor parameter */)
// : /* constructor initialize list */
// {
// 	/* constructor code */
// }

Serializer::Serializer(const Serializer& copy)
{
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Serializer::~Serializer()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Serializer& Serializer::operator=(const Serializer& obj)
{
	if (this == &obj)
		return (*this);
	this->_raw_data = obj._raw_data;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const Serializer& serializer)
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

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t rt = 0;
	uintptr_t offset = 0;
	// rt = &(ptr->id_num) + &(ptr->name) + &(ptr->height);

	offset = reinterpret_cast<uintptr_t>(&ptr->id_num);
	rt = offset;
	offset += sizeof(ptr->id_num);
	offset = reinterpret_cast<uintptr_t>(&ptr->name);
	offset += sizeof(ptr->name);
	offset = reinterpret_cast<uintptr_t>(&ptr->height);
	
	return (rt);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *rt = new Data;
	uintptr_t tmp;

	tmp = raw;

	rt->id_num = *reinterpret_cast<int*>(tmp);
	rt->name = *reinterpret_cast<std::string*>(tmp + sizeof(int*));
	rt->height = *reinterpret_cast<float*>(tmp + sizeof(int*) + sizeof(std::string));  

	return (rt);
}