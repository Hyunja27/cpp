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
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const int i_num)
{
	std::cout << "Int constructor called" << std::endl;
	this->f_val = i_num;
}

Fixed::Fixed(const float f_num)
{
	std::cout << "Float constructor called" << std::endl;
	// std::cout << f_num <<  std::endl;
	this->f_val = f_num;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	// this->int_val = copy.getRawBits();
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Fixed& Fixed::operator=(const Fixed& obj)
{
	if (this == &obj)
		return (*this);
	std::cout << "Assignation operator called" << std::endl;
	this->f_val = obj.f_val;
	return (*this);
}

bool Fixed::operator>(const Fixed& obj)
{
	if (this->f_val > obj.f_val)
		return (1);
	else
		return (0);
}

bool Fixed::operator<(const Fixed& obj)
{
	if (this->f_val < obj.f_val)
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed& obj)
{
	if (this->f_val >= obj.f_val)
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed& obj)
{
	if (this->f_val <= obj.f_val)
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed& obj)
{
	if (this->f_val == obj.f_val)
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed& obj)
{
	if (this->f_val != obj.f_val)
		return (1);
	else
		return (0);
}

Fixed& Fixed::operator+(const Fixed& obj)
{
	this->f_val += obj.f_val;
	return (*this);
}

Fixed& Fixed::operator-(const Fixed& obj)
{
	this->f_val -= obj.f_val;
	return (*this);
}

Fixed& Fixed::operator*(const Fixed& obj)
{
	this->f_val *= obj.f_val;
	return (*this);
}

Fixed& Fixed::operator/(const Fixed& obj)
{
	this->f_val /= obj.f_val;
	return (*this);
}

Fixed& Fixed::operator++()
{
	this->f_val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(this->f_val);

	this->f_val++;
	return (ret);
}

Fixed& Fixed::operator--()
{
	this->f_val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(this->f_val);

	this->f_val--;
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
	this->f_val = raw;
}

float Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->f_val);
}

float Fixed::toFloat( void ) const
{
	float tmp;

	tmp = roundf(this->f_val * (1 << float_val));
	tmp = tmp / (1 << float_val);
	return(tmp);
}

int Fixed::toInt( void ) const
{
	return(round(this->f_val));
}

Fixed& Fixed::max(Fixed& obj_1, Fixed& obj_2)
{
	if (obj_1 > obj_2)
		return (obj_1);
	else
		return (obj_2);
}

Fixed& Fixed::min(Fixed& obj_1, Fixed& obj_2)
{
	if (obj_1 > obj_2)
		return (obj_2);
	else
		return (obj_1);
}

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

/* global overload */
const Fixed& max(const Fixed& obj_1, const Fixed& obj_2)
{
	if (obj_1.f_val > obj_2.f_val)
		return (obj_1);
	else
		return (obj_2);
}

const Fixed& min(const Fixed& obj_1, const Fixed& obj_2)
{

}