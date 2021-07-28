/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/28 19:23:21 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main(void)
{
    Data test_d1;
    // Data *test_d2 = new Data;
    Serializer S;
    
    uintptr_t serialized_key;
    Data*     deserialized_val;
    
    test_d1.id_num = 42;
    test_d1.name = "spark";
    test_d1.height = 189;

    // test_d2->id_num = 42;
    // test_d2->name = "spark";
    // test_d2->height = 189;

    std::cout << std::endl << "========== Basic Data ==========" << std::endl;
    std::cout << "id_num &: " << &test_d1.id_num << std::endl;
    std::cout << "name &: " << &test_d1.name << std::endl;
    std::cout << "height &: " << &test_d1.height << std::endl;
    std::cout << "id_num: " << test_d1.id_num << std::endl;
    std::cout << "name: " << test_d1.name << std::endl;
    std::cout << "height: " << test_d1.height << std::endl;

    

    std::cout << std::endl << "========== Serialized_key ==========" << std::endl;   
    serialized_key = S.serialize(&test_d1);
    std::cout << "   -> " << serialized_key << std::endl;
    std::cout << " & -> " << &serialized_key << std::endl;
    
    std::cout << std::endl << "========== DeSerialized_val ==========" << std::endl;
    deserialized_val = S.deserialize(serialized_key);
    std::cout << "id_num &: " << &deserialized_val->id_num << std::endl;
    std::cout << "name &: " << &deserialized_val->name << std::endl;
    std::cout << "height &: " << &deserialized_val->height << std::endl;
    std::cout << "id_num: " << deserialized_val->id_num << std::endl;
    std::cout << "name: " << deserialized_val->name << std::endl;
    std::cout << "height: " << deserialized_val->height << std::endl;

    // std::cout << std::endl << "========== DeSerialized_val ==========" << std::endl;
    // test_d2 = S.deserialize(serialized_key);
    // std::cout << "id_num &: " << &test_d2->id_num << std::endl;
    // std::cout << "name &: " << &test_d2->name << std::endl;
    // std::cout << "height &: " << &test_d2->height << std::endl;
    // std::cout << "id_num: " << test_d2->id_num << std::endl;
    // std::cout << "name: " << test_d2->name << std::endl;
    // std::cout << "height: " << test_d2->height << std::endl;

    delete(deserialized_val);

    return 0;
}