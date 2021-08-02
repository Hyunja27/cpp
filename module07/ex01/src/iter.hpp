#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T>

void iter( T *array, size_t size, void (*f)(T &parameter))
{
    for (size_t i = 0; i < size; ++i)
        f(array[i]);
}

template <typename T>

void in_iter(T &parameter)
{
    std::cout << parameter << std::endl;
}

#endif
