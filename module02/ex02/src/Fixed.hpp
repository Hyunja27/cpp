#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <iomanip>

class Fixed
{
	private:
		int 				modified_int;
		static const int 	float_val = 8;
	public:
		Fixed();
		Fixed(const int i_num);
		Fixed(const float f_num);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& obj);

		bool operator>(const Fixed& obj);
		bool operator<(const Fixed& obj);
		bool operator>=(const Fixed& obj);
		bool operator<=(const Fixed& obj);
		bool operator==(const Fixed& obj);
		bool operator!=(const Fixed& obj);
		Fixed& operator+(const Fixed& obj);
		Fixed& operator-(const Fixed& obj);
		Fixed& operator*(const Fixed& obj);
		Fixed& operator/(const Fixed& obj);
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		virtual ~Fixed();
		/* declare member function */
		int getRawBits(void) const;
		void setRawBits(float const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed& max(const Fixed& obj_1, const Fixed& obj_2);
		static Fixed& min(const Fixed& obj_1, const Fixed& obj_2);
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

/* global overload */
const Fixed& max(const Fixed& obj_1, const Fixed& obj_2);
const Fixed& min(const Fixed& obj_1, const Fixed& obj_2);

#endif
