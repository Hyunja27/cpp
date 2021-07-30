/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/30 14:49:05 by hyunja           ###   ########.fr       */
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

		// 아랫줄 해당 부분에서 에러가 출력될 것이다! 추상 클래스의 메소드를 구체적으로 선언하지 않았기 때문에, Animal을 인스턴스화할 수 없기 때문이다!
		
		Animal tmp;

		// 위 인스턴스 시도 부분을 주석처리한다면 정상동작한다!
		
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

