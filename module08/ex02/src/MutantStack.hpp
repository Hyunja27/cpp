#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		typedef typename std::stack<T>::container_type::iterator new_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator new_r_iterator;
		
		MutantStack();
		MutantStack(const MutantStack& copy);
		MutantStack& operator=(const MutantStack& obj);
		virtual ~MutantStack();

		/* declare member function */
		new_iterator begin(void);
		new_iterator end(void);
		new_r_iterator rbegin(void);
		new_r_iterator rend(void);
};

#include "MutantStack.cpp"

#endif
