/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/08/11 19:32:30 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);
		std::cout << "[stack -> 5, 17 ]" << std::endl;

		std::cout << std::endl << "========== Top ==========" << std::endl;
		std::cout << mstack.top() << std::endl;
		
		std::cout << "========== pop! ==========" << std::endl;
		mstack.pop();

		std::cout << std::endl << "========== Size ==========" << std::endl;		
		std::cout << mstack.size() << std::endl;

		
		std::cout << std::endl << "[Add 4 num ]" << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		std::cout << "[stack -> 5, 3, 5, 737, 0 ]" << std::endl;
		
		std::cout << std::endl << "========== check all stack with iterator ==========" << std::endl;
		MutantStack<int>::new_iterator it = mstack.begin();
		MutantStack<int>::new_iterator ite = mstack.end();
		
		++it;
		--it;
		while (it != ite)
		{
		  std::cout << *it << std::endl;
		  ++it;
		}
		std::stack<int> s(mstack);

		std::cout << std::endl << "========== check all stack with r iterator ==========" << std::endl;

		MutantStack<int>::new_r_iterator rit = mstack.rbegin();
		MutantStack<int>::new_r_iterator rite = mstack.rend();
		
		++rit;
		--rit;
		while (rit != rite)
		{
		  std::cout << *rit << std::endl;
		  ++rit;
		}
	








        // ======= basic stack operations =======

        // std::stack<int> stack1;

        // std::cout << stack1.size() << std::endl;
        
        // stack1.push(1);
        // stack1.push(2);
        // stack1.push(3);
        // stack1.push(4);
        // stack1.push(5);
        // stack1.push(6);
        // stack1.push(7);
        // stack1.push(8);
        // stack1.push(9);
        // stack1.push(10);

        // std::cout << stack1.size() << std::endl;

        // std::cout << stack1.top() << std::endl;

        // stack1.pop();

        // std::cout << stack1.top() << std::endl;

        // operation end


        
		return 0;
}