#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <string>
# include <iostream>


class NonExist: public std::exception 
{
	public:
		virtual const char* what() const throw()
		{
			return "No such element!";
		}
};

template <typename T>

int easyfind(T a, int b)
{
	typename T::iterator rt;

	rt = find(a.begin(), a.end(), b);
	// std::cout << rt << "@@@" << std::endl;
	if (rt == a.end())
	{
		throw NonExist();
		return (-1);
	}
	else
		return *rt;
}

#endif
