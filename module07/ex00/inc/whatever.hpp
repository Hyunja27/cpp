#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

class Awesome {
	public:
		Awesome(int n = 1) : _n(n) {}
		Awesome(const Awesome &rhs) { _n = rhs._n; }
		int getN() const { return _n; }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); } 
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); } 
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); } 
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); } 
		bool operator>=( Awesome const & rhs ) const {return (this->_n >= rhs._n); } 
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); } 
		
	private: 
		int _n;
};

template <typename T>

void swap(T a, T b)
{
	T temp = a;
	a = b;
	b = temp;
}


template <typename T>

T	min(T a, T b)
{
	return (a < b) ? a : b;
}



template <typename T>

T	max(T a, T b)
{
	return (a > b) ? a : b;
}

#endif
