/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/23 18:07:46 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	{
		Animal *Animals_A[42];
		
		for (int i = 0; i < 42; ++i)
		{
			if (i % 2 == 0)
				Animals_A[i] = new Dog();
			else
				Animals_A[i] = new Cat();
		}
		for (int i = 0; i < 42; ++i)
		{
			delete Animals_A[i];
		}

		std::cout << "============= Deep Copy Test =============" << std::endl;

		Dog tmp1;
		Dog tmp2;

		tmp2 = tmp1;

	}
	system("leaks brain");
}

