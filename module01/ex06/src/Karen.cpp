#include "Karen.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Karen::Karen() {}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

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

void Karen::debug(void)
{
	std::cout << 
	"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" 
	<< std::endl;
}
void Karen::info(void)
{
	std::cout << 
	"I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
	<< std::endl;
}

void Karen::warning(void)
{
	std::cout << 
	"I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." 
	<< std::endl;
}

void Karen::error(void)
{
	std::cout << 
	"This is unacceptable, I want to speak to the manager now." 
	<< std::endl;
}

void Karen::complain( std::string level )
{
	int i = -1;
	int	ok = 0;

	void(Karen::*f_ptr[4])() = 
	{
		&Karen::debug,
	 	&Karen::info,
	 	&Karen::warning,
	 	&Karen::error 
	};

	std::string f_name[4] = 
	{
		"debug",
		"info",
		"warning",
		"error"
	};

	while (++i < 4)
	{
		if (f_name[i] == level)
		{
			(this->*f_ptr[i])();
			ok =1;
		}
	}
	if (ok == 0)
		std::cout << "Not good arg." << std::endl;
}