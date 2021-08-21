#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template <class T>

class Array
{
	private:
		T * array;
		unsigned int len;
	public:
		Array() {this->array = new T; len = 0; std::cout << this->array << std::endl;};
		Array(const unsigned int i) {this->array = new T[i]; len = i; /*std::cout << this->array << std::endl; */ };
		Array(const Array& copy) {this->operator=(copy);};
		Array& operator=(const Array& obj) 
		{	
			if (this->array == obj.array)
				return *this;
			// delete[] this->array; 
			this->array = new T[obj.size()]; 
			for (unsigned int i = 0; i < obj.size(); i++)
				this->array[i] = obj.array[i];
			// std::cout << this->array << std::endl;
			this->len = obj.len;
			return *this;
		};
		T & operator[](const unsigned int i) 
		{
			if (i < 0 || i >= this->size())
				throw Outofindex_Exception();
			return array[i];
		};
		class Outofindex_Exception :public std::exception
		{
			public:
				virtual	const char*	what() const throw() 
				{
					return "Out of index exception";
				}
		};
		~Array() {delete[] array;};
		unsigned int size() const {return this->len;};
};


#endif
