#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>
#include <iomanip>

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
		virtual ~Fixed();
		/* declare member function */
		int getRawBits(void) const;
		void setRawBits(float const raw);




		float toFloat( void ) const;
		int toInt( void ) const;
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
