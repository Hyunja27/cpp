#include "RobotomyRequestForm.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: Form("RobotomyRequestForm", 72, 45)
{
	/* constructor code */
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
: Form("RobotomyRequestForm", 72, 45)
{
	/* copy-constructor code */
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

RobotomyRequestForm::~RobotomyRequestForm()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this == &obj)
		return (*this);
	/* overload= code */
	this->_isSigned = obj._isSigned;
	this->_target = obj._target;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const RobotomyRequestForm& robotomyRequestForm)
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
void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	if (rand() % 2 == 0)
	{
		std::cout << "Drrrrrrr...... DRrrrrrrr....!!" << std::endl;
		std::cout << "<" << this->_target << "> has been robotomize!" << std::endl;
	}
	else
	{
		std::cout << "<" << this->_target << "> robotomizing Failed!" << std::endl;
	}
}