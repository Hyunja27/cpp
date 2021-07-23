#include "Conversion.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Conversion::Conversion() : _raw_str("0"), _is_one_char(0), _cvt_int(0), _cvt_char(0), _cvt_float(0), _cvt_double(0)
{}

Conversion::Conversion(std::string raw_data)
: _raw_str(raw_data), _is_one_char(0), _cvt_int(0), _cvt_char(0), _cvt_float(0),  _cvt_double(0)
{
}

Conversion::Conversion(const Conversion& copy)
{
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Conversion::~Conversion()
{
	/* destructor code */
}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Conversion& Conversion::operator=(const Conversion& obj)
{
	if (this == &obj)
		return (*this);
	this->_cvt_char = obj._cvt_char;
	this->_cvt_int = obj._cvt_int;
	this->_cvt_float = obj._cvt_float;
	this->_cvt_double = obj._cvt_double;
	this->_raw_str = obj._raw_str;
	this->_is_one_char = obj._is_one_char;
	return (*this);
}

// std::ostream&
// operator<<(std::ostream& out, const Conversion& conversion)
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
void Conversion::basic_check()
{
	if (this->_raw_str.empty())
		throw std::string("Empty string");
	if (this->_raw_str.size() > 2)
	{
		if (this->_raw_str.length() == 3)
		{
			if (this->_raw_str[0] == '\'' && this->_raw_str[2] == '\'')
			{
				this->_is_one_char = 1;
				return ;
			}
		}

		if (this->_raw_str[0] == '-')
		{
			unsigned long  i = 0;
			while(++i < (this->_raw_str.length()))
			{
				if (this->_raw_str[i] < '0' || this->_raw_str[i] > '9')
					throw std::string("Invalid string (Conversion Impossible)");
			}
			return ;
		}
		if ((this->_raw_str == "nan") || (this->_raw_str == "inf") || (this->_raw_str == "-inf"))
			return;
		
		unsigned long i = -1;
		while (++i < (this->_raw_str.length())) 
		{
			if (!isdigit(this->_raw_str[i]) && this->_raw_str[i] != '.' && this->_raw_str[i] != 'f')
				throw std::string("Invalid string (Conversion Impossible)");
		}
	}
	// throw std::string("Invalid string (Conversion Impossible)");
}

void Conversion::toChar()
{
	if (this->_raw_str == "nan")
	{
		std::cout << "char: " << "impossible" << std::endl;
		return ;
	}
	int tmp = 0;
	try
	{
		if (this->_is_one_char == 0)
			tmp = stoi(this->_raw_str);
		else
			tmp = static_cast<char>(this->_raw_str[1]);
	}
	catch(const std::exception& e)
	{
		throw std::string("char: impossible");
	}
	
	if (!(32 <= tmp && tmp <= 126))
	{
		std::cout << "char: " << "Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: '" << (char)tmp << "'" <<std::endl;
	this->_cvt_char = static_cast<char>(tmp);
}

void Conversion::toInt()
{
	if (this->_raw_str == "nan")
	{
		std::cout << "int: " << "impossible" << std::endl;
		return ;
	}

	try
	{
		if (this->_is_one_char == 0)
			this->_cvt_int = stoi(this->_raw_str);
		else
			this->_cvt_int = static_cast<int>(this->_raw_str[1]);
	}
	catch(const std::exception& e)
	{
		throw std::string("int: impossible");
	}
	
	std::cout << "int: " << this->_cvt_int << std::endl;
}

void Conversion::toFloat()
{
	if (this->_raw_str == "nan")
	{
		std::cout << "float: " << "nanf" << std::endl;
		return ;
	}
	
	try
	{
		if (this->_is_one_char == 0)
			this->_cvt_float = stof(this->_raw_str);
		else
		{
			this->_cvt_float = static_cast<float>(this->_raw_str[1]);
		}
	}
	catch(const std::exception& e)
	{
		// throw Conversion::F_exception();
		throw std::string("float: impossible");
	}

	if (isnan(this->_cvt_float))
	{
		std::cout << "float: " << "nanf" << std::endl;
		return ;
	}

	if (this->_is_one_char == 0)
	{
		if (std::numeric_limits<float>::infinity() == stof(this->_raw_str))
		{
			throw std::string("float: inff");
		}
		if (stof(this->_raw_str) == -std::numeric_limits<float>::infinity())
		{
			throw std::string("float: -inff");
		}
	}

	unsigned long i = -1;
	int isdot = 0;
	while (++i < this->_raw_str.length() - 1)
		if (this->_raw_str[i] == '.')
			isdot = 1;
	unsigned long f_anker = 7;
	if (this->_raw_str[0] == '-')
		f_anker += 1;

	if (this->_raw_str[this->_raw_str.length() - 1] == 'f')
	{
		if (isdot == 0)
		{
			if (this->_raw_str.length() < f_anker)
				std::cout << "float: " << static_cast<float>(this->_cvt_float) << ".0f" <<std::endl;
			else
				std::cout << "float: " << static_cast<float>(this->_cvt_float) << "f" << std::endl;
		}
		else
			std::cout << "float: " << this->_raw_str <<std::endl;
	}
	else
	{
		if (isdot == 0)
		{
			if (this->_raw_str.length() < f_anker)
				std::cout << "float: " << static_cast<float>(this->_cvt_float) << ".0f" << std::endl;
			else
				std::cout << "float: " << static_cast<float>(this->_cvt_float) << "f" << std::endl;
		}
		else
			std::cout << "float: " << this->_raw_str << "f" << std::endl;
	}
}

void Conversion::toDouble()
{
	if (this->_raw_str == "nan")
	{
		std::cout << "double: " << "nan" << std::endl;
		return ;
	}
	
	try
	{
		if (this->_is_one_char == 0)
			this->_cvt_double = stod(this->_raw_str);
		else
			this->_cvt_double = static_cast<double>(this->_raw_str[1]);
	}
	catch(const std::exception& e)
	{
		throw std::string("double: impossible");
	}

	if (isnan(this->_cvt_double))
	{
		std::cout << "double: " << "nan" << std::endl;
		return ;
	}

	if (this->_is_one_char == 0)
	{
		if (std::numeric_limits<double>::infinity() == stod(this->_raw_str))
		{
			throw std::string("double: inf");
		}
		if (stod(this->_raw_str) == -std::numeric_limits<double>::infinity())
		{
			throw std::string("double: -inf");
		}
	}
	unsigned long i = -1;
	int isdot = 0;
	while (++i < this->_raw_str.length())
		if (this->_raw_str[i] == '.')
			isdot = 1;
	unsigned long d_anker = 7;
	if (this->_raw_str[0] == '-')
		d_anker += 1;
	if (this->_raw_str[this->_raw_str.length() - 1] != 'f')
	{
		if (isdot == 0)
		{
			if (this->_raw_str.length() < d_anker)
				std::cout << "doule: " << static_cast<float>(this->_cvt_float) << ".0" <<std::endl;
			else
				std::cout << "doule: " << static_cast<float>(this->_cvt_float) << std::endl;
		}
		else
			std::cout << "doule: " << this->_raw_str <<std::endl;
	}
	else
	{
		if (isdot == 0)
		{
			if (this->_raw_str.length() < d_anker)
				std::cout << "doule: " << static_cast<float>(this->_cvt_float) << ".0" << std::endl;
			else
				std::cout << "doule: " << static_cast<float>(this->_cvt_float) << std::endl;
		}
		else
			std::cout << "doule: " << this->_raw_str << std::endl;
	}
}


const char * Conversion::F_exception::what() const throw()
{
	return ("Cannot convert!");
}
