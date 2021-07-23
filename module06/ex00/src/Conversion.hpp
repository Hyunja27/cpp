#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>

class Conversion
{
	private:
		/* declare member variable */
		std::string _raw_str;
		int _is_one_char;
		int _cvt_int;
		char _cvt_char;
		float _cvt_float;
		double _cvt_double;

	public:
		Conversion();
		Conversion(std::string raw_data);
		Conversion(const Conversion& copy);
		Conversion& operator=(const Conversion& obj);
		virtual ~Conversion();

		/* declare member function */
		void basic_check();
		void toChar();
		void toInt();
		void toFloat();
		void toDouble();
		class F_exception : public std::exception
		{
			public:
				const char * what() const throw();
		};
		
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Conversion& conversion);

#endif
