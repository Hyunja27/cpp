/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/30 19:24:55 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int rt = rand() % 3;

    if (rt == 0)
        return (new B);
    else if (rt == 1)
        return (new A);
    else
        return (new C);
}

void identify(Base* p)
{

    if (dynamic_cast<A *>(p))
        std::cout << "A Type" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B Type" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C Type" << std::endl;
    else
        std::cout << "what type... Coding siruu......." << std::endl;
}

void identify(Base& p)
{

    try
    {
        Base & tmp1 = dynamic_cast<A &>(p);
        std::cout << "A Type" << std::endl;
        (void)tmp1;
        return ;
    }
    catch(const std::exception& e){}
    
    try
    {
        Base & tmp2 = dynamic_cast<B &>(p);
        std::cout << "B Type" << std::endl;
        (void)tmp2;
        return ;
    }
    catch(const std::exception& e){}
    
    try
    {
        Base & tmp3 = dynamic_cast<C &>(p);
        std::cout << "C Type" << std::endl;
        (void)tmp3;
        return ;
    }
    catch(const std::exception& e){}
    std::cout << "what type... Coding siruu......." << std::endl;
}

int main(void)
{
    srand(time(NULL));
    
    Base * tmp_Base = new Base;
    Base * tmp_A = new A;
    Base * tmp_B = new B;
    Base * tmp_C = new C;

    Base * tmp_rand;

    std::cout << "===============  PTR check  ===============" << std::endl;

    identify(tmp_A);
    identify(tmp_B);
    identify(tmp_C);
    identify(tmp_Base);
    
    tmp_rand = generate();
    identify(tmp_rand);

    std::cout << "===============  REP check  ===============" << std::endl;
    
    identify(&(*tmp_A));
    identify(&(*tmp_B));
    identify(&(*tmp_C));
    identify(&(*tmp_Base));
    
    delete (tmp_rand);
    tmp_rand = generate();
    identify(&(*tmp_rand));

    delete (tmp_rand);
    delete (tmp_A);
    delete (tmp_B);
    delete (tmp_C);
    
       
    return 0;
}
