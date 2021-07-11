#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
	private:
		int int_val;
		static const int float_val = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& obj);
		virtual ~Fixed();
		/* declare member function */
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif
