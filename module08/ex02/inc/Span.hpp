#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>

class Span
{
	private:
		std::vector<int> _data;
		unsigned int _size;
		unsigned int _occupied;
		Span();

	public:
		Span(const unsigned int size);
		Span(const Span& copy);
		Span& operator=(const Span& obj);
		virtual ~Span();

		/* declare member function */
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		long shortestSpan(void);
		long longestSpan(void);
		class no_span_exception : public std::exception
		{
			public:
				const char * what() const throw();
		};
		class double_exception : public std::exception
		{
			public:
				const char * what() const throw();
		};
};


#endif
