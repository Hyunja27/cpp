#include "ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: Form("ShrubberyCreationForm", 145, 137)
{
	/* constructor code */
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
: Form("ShrubberyCreationForm", 145, 137)
{
	/* copy-constructor code */
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this == &obj)
		return (*this);
	this->_isSigned = obj._isSigned;
	this->_target = obj._target;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const ShrubberyCreationForm& shrubberyCreationForm)
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
void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	std::ofstream fo("<" + this->_target + ">" + "_shrubbery");
	if (fo.fail())
		throw ShrubberyCreationForm::FileCreationException();
	fo << 
	"█──────────────────────────────█" << std::endl <<
	"█──────────────██──────────────█" << std::endl <<
	"█─────────────████─────────────█" << std::endl <<
	"█───────────██▒▒▒▒██───────────█" << std::endl <<
	"█─────────██▒▒▒▒▒▒▒▒██─────────█" << std::endl <<
	"█───────────██▒▒▒▒██───────────█" << std::endl <<
	"█────────────██████────────────█" << std::endl <<
	"█───────────███▓▓███───────────█" << std::endl <<
	"█────────────█▓▓▓▓█────────────█" << std::endl <<
	"█───────────█▓▓▓▓▓▓█───────────█" << std::endl <<
	"█──────────█▓▓▓▓▓▓▓▓█──────────█" << std::endl <<
	"█─────────█▓▓▓▓▓▓▓▓▓▓█─────────█" << std::endl <<
	"█───────████▓▓▓▓▓▓▓▓████───────█" << std::endl <<
	"█──────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█──────█" << std::endl <<
	"█─────███████▓▓▓▓▓▓███████─────█" << std::endl <<
	"█──────────█▓▓▓▓▓▓▓▓█──────────█" << std::endl <<
	"█─────────█▓▓▓▓▓▓▓▓▓▓█─────────█" << std::endl <<
	"█────────█▓▓▓▓▓▓▓▓▓▓▓▓█────────█" << std::endl <<
	"█──────███▓▓▓▓▓▓▓▓▓▓▓▓███──────█" << std::endl <<
	"█─────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█─────█" << std::endl <<
	"█────███████▓▓▓▓▓▓▓▓███████────█" << std::endl <<
	"█────────█▓▓▓▓▓▓▓▓▓▓▓▓█────────█" << std::endl <<
	"█───────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓█───────█" << std::endl <<
	"█──────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█──────█" << std::endl <<
	"█─────██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██─────█" << std::endl <<
	"█────██████████████████████────█" << std::endl <<
	"█────────────██████────────────█" << std::endl <<
	"█────────────██████────────────█" << std::endl <<
	"█────────────██████────────────█" << std::endl <<
	"█────────────██████────────────█" << std::endl <<
	"█────────────██████────────────█" << std::endl;
	fo << "The shrubbery was created by " << this->_target << "!" << std::endl;
	fo.close();
}

const char* ShrubberyCreationForm::NoFileException::what() const throw()
{
	return ("There is No file to open!");
}

const char* ShrubberyCreationForm::FileCreationException::what() const throw()
{
	return ("File Creation is Failed!");
}