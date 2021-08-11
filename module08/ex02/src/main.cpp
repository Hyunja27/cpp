/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/08/11 17:12:34 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void) 
{
    Span sp = Span(5);
    
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl << std::endl;


    std::cout << " ==== New addnumber test == == " << std::endl << std::endl;

    Span tmp = Span(10000);

    std::vector<int> v(10000);
    
    v[1989] = 909;

    tmp.addNumber(v.begin(), v.end());
    
    std::cout << tmp.shortestSpan() << std::endl;
    std::cout << tmp.longestSpan() << std::endl;
    
    
    
    
}