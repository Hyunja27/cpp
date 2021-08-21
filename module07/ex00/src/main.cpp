/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/08/21 21:20:02 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void) 
{

    int a = 92;
    int b = 104;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


    std::cout << "============== use testClass in subject ==============" << ::max( c, d ) << std::endl;
    
    Awesome test1( 1 );
	Awesome test2( 2 );

	::swap(test1, test2);
	std::cout << "test1 = " << test1.getN() << ", test2 = " << test2.getN() << std::endl;
	std::cout << "min( test1, test2 ) = " << ::min( test1, test2 ).getN() << std::endl;
	std::cout << "max ( test1, test2 ) = " << ::max( test1, test2 ).getN() << std::endl;
    
    

    return 0;
}