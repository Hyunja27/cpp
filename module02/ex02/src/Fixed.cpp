#include "Fixed.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int i_num)
{
	// std::cout << "Int constructor called" << std::endl;
	int tmp;

	tmp = roundf(i_num * (1 << float_val));
	this->modified_int = tmp;
}

Fixed::Fixed(const float f_num)
{
	// std::cout << "Float constructor called" << std::endl;
	int tmp;

	tmp = roundf(f_num * (1 << float_val));
	this->modified_int = tmp;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	// this->int_val = copy.getRawBits();
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Fixed &Fixed::operator=(const Fixed &obj)
{
	if (this == &obj)
		return (*this);
	// std::cout << "Assignation operator called" << std::endl;
	this->modified_int = obj.modified_int;
	return (*this);
}

bool Fixed::operator>(const Fixed &obj)
{
	if (this->modified_int > obj.modified_int)
		return (1);
	else
		return (0);
}

bool Fixed::operator<(const Fixed &obj)
{
	if (this->modified_int < obj.modified_int)
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed &obj)
{
	if (this->modified_int >= obj.modified_int)
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed &obj)
{
	if (this->modified_int <= obj.modified_int)
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed &obj)
{
	if (this->modified_int == obj.modified_int)
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed &obj)
{
	if (this->modified_int != obj.modified_int)
		return (1);
	else
		return (0);
}

Fixed &Fixed::operator+(const Fixed &obj)
{
	this->modified_int += obj.modified_int;
	return (*this);
}

Fixed &Fixed::operator-(const Fixed &obj)
{
	this->modified_int -= obj.modified_int;
	return (*this);
}

Fixed &Fixed::operator*(const Fixed &obj)
{
	this->modified_int = this->modified_int * obj.modified_int / (1 << this->float_val);
	return (*this);
}

Fixed &Fixed::operator/(const Fixed &obj)
{
	this->modified_int = this->modified_int / obj.modified_int * (1 << this->float_val);
	return (*this);
}

Fixed &Fixed::operator++()
{
	this->modified_int++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);

	this->modified_int++;
	return (ret);
}

Fixed &Fixed::operator--()
{
	this->modified_int--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(this->modified_int);

	this->modified_int--;
	return (ret);
}

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

void Fixed::setRawBits(float const raw)
{
	int tmp;

	tmp = raw * (1 << float_val);
	this->modified_int = tmp;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->modified_int);
}

float Fixed::toFloat(void) const
{
	float tmp;

	tmp = roundf(this->modified_int);
	tmp = tmp / (1 << float_val);
	return (tmp);
}

int Fixed::toInt(void) const
{
	return (roundf(this->modified_int / (1 << float_val)));
}

Fixed &Fixed::max(Fixed &obj_1, Fixed &obj_2)
{
	if (obj_1 > obj_2)
		return (obj_1);
	else
		return (obj_2);
}

Fixed &Fixed::min(Fixed &obj_1, Fixed &obj_2)
{
	if (obj_1 > obj_2)
		return (obj_2);
	else
		return (obj_1);
}

/* global operator overload */
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

const Fixed &Fixed::max(const Fixed &obj_1, const Fixed &obj_2)
{
	if (obj_1.modified_int > obj_2.modified_int)
		return (obj_1);
	else
		return (obj_2);
}

const Fixed &Fixed::min(const Fixed &obj_1, const Fixed &obj_2)
{
	if (obj_1.modified_int > obj_2.modified_int)
		return (obj_2);
	else
		return (obj_1);
}