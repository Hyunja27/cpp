/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/08/02 15:59:09 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

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

    
    return 0;
}