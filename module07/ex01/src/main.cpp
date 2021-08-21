/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/08/21 21:32:22 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
	o << rhs.get();
	return o;
}

int main(void) 
{
    
    char char_arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    iter(char_arr, 10, in_iter);
    
    int int_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    iter(int_arr, 10, in_iter);

    float float_arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
    iter(float_arr, 10, in_iter);

    std::string str_arr[10] = {"aa", "bb", "cc", "dd", "ee", "ff", "gg", "hh", "ii", "jj"};
    iter(str_arr, 10, in_iter); 


    std::cout << std::endl;
	int tab[5] = {
		0, 1, 2, 3, 4
	};
    Awesome tab2[5];
    
	iter(tab, 5, in_iter );
	iter( tab2, 5, in_iter );

    return (0);
    
    return 0;
}