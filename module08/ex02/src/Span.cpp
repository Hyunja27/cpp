#include "Span.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

Span::Span() 
{
	this->_size = 0;
	this->_occupied = 0;
}
Span::Span(const unsigned int size)
{
	this->_size = size;
	this->_occupied = 0;
}

Span::Span(const Span& copy)
{
	this->operator=(copy);
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Span::~Span()
{

}

/* ************************************************************************** */
/* -------------------------------- OVERLOAD -------------------------------- */
/* ************************************************************************** */

Span& Span::operator=(const Span& obj)
{
	if (this == &obj)
		return (*this);
	/* overload= code */
	this->_data = obj._data;
	// long i = 0;
	// while (i < obj._size)
	// {
	// 	this->_data[i] = obj._data[i];
	// 	i++;
	// }
	this->_occupied = obj._occupied;
	this->_size = obj._size;
	return (*this);
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

void Span::addNumber(int num)
{
	// if (this->_data == NULL || this->_occupied >= this->_size)
	// {
	// 	// std::cout << "_size is " << this->_size << std::endl;
	// 	throw no_span_exception();
	// 	return ;
	// }
	// long i = 0;
	// while (i < this->_occupied)
	// {
	// 	if (this->_data[i] == num)
	// 	{
	// 		throw double_exception();
	// 		return ;
	// 	}
	// 	i++;
	// }
	// this->_data[this->_occupied] = num;
	// this->_occupied++;

	if (this->_data.size() >= this->_size)
	{
		throw double_exception();
		return ;
	}
	this->_data.push_back(num);
	// std::cout << "Number " << num << " added to the span, occupied is " << this->_occupied <<std::endl;
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	unsigned int tmp_size = last - first;

	if (this->_data.size() + tmp_size > this->_size)
		throw double_exception();
	while (first != last)
	{
		this->_data.push_back(*first);
		first++;
	}
}

long Span::shortestSpan(void)
{
	if (this->_data.size() <= 1)
	{
		throw no_span_exception();
		return 0;
	}

	std::vector<int> tmp_vec;
	tmp_vec = this->_data;
	sort(tmp_vec.begin(), tmp_vec.end());

	long tmp_int = *(tmp_vec.begin() + 1) - *tmp_vec.begin();

	for (long j = 0; j < this->_occupied; j++)
		std::cout << "[] " << this->_data[j] << std::endl;

	std::vector<int>::iterator iter = tmp_vec.begin();

	while(++iter != tmp_vec.end())
	{
		if (tmp_int > (*iter - *(iter - 1)))
			tmp_int = *iter - *(iter - 1);
	}
	return tmp_int;
}

long Span::longestSpan(void)
{
	if (this->_data.size() <= 1)
	{
		throw no_span_exception();
		return 0;
	}

	int small_point = *min_element(this->_data.begin(), this->_data.end()); 
	int large_point = *max_element(this->_data.begin(), this->_data.end());

	long i = 0;
	while(++i < this->_occupied)
	{
		if (this->_data[i] < small_point)
			small_point = this->_data[i];
		if (this->_data[i] > large_point)
			large_point = this->_data[i];
	}
	// std::cout << "The smallest span is " << small_point << std::endl;
	// std::cout << "The largest span is " << large_point << std::endl;
	return (large_point - small_point);
}

const char * Span::no_span_exception::what() const throw()
{
	return (" It's Empty, or too small to measuring span!");
}

const char * Span::double_exception::what() const throw()
{
	return (" there is No Space !");
}