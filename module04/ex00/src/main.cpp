/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/23 18:23:44 by hyunja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete meta;
	delete cat;
	delete dog;

	std::cout << "==========  Wrong_Animal Test ==========" << std::endl;

	const WrongAnimal* testanimal = new WrongAnimal();
	const WrongAnimal* testcat = new WrongCat();

	std::cout << testcat->getType() << " " << std::endl;
	testcat->makeSound();
	delete(testanimal);
	delete(testcat);
	
	return (0);
}
