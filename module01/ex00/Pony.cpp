/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:22:41 by spark             #+#    #+#             */
/*   Updated: 2021/07/04 16:30:19 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string _name, std::string _number)
{
	name = _name;
	number = _number;
	std::cout << name << " (number " << number << " ) is Born! tara_!!" << std::endl;
}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

Pony::~Pony()
{
	std::cout << name << " (number " << number << " ) is destructed!" << std::endl;
}

/* ************************************************************************** */
/* -------------------------------  METHODS   ------------------------------- */
/* ************************************************************************** */

void	Pony::say_number(void)
{
	std::cout << name << "'s number is " << number << std::endl;
}

void	Pony::running_arround(void)
{
	std::cout << name << " is running! hee_ha! " << std::endl;
}

void	Pony::eating_carrot(void)
{
	std::cout << name << " is eating " << number << " carrot!" << std::endl;
}

void	ponyOnTheHeap(void)
{
	Pony *Heap1;
	Pony *Heap2;
	Pony *Heap3;

	Heap1 = new Pony("heap_Ponyboy", "1");
	Heap2 = new Pony("heap_Ponygirl", "2");
	Heap3 = new Pony("heap_Ponyby", "3");
	Heap1->say_number();
	Heap1->running_arround();
	Heap1->eating_carrot();
	Heap2->say_number();
	Heap2->running_arround();
	Heap2->eating_carrot();
	Heap3->say_number();
	Heap3->running_arround();
	Heap3->eating_carrot();

	delete(Heap1);
	delete(Heap2);
	delete(Heap3);
}

void	ponyOnTheStack(void)
{
	Pony stack1 = Pony("stack_Ponyby", "4");
	Pony stack2 = Pony("stack_Ponygirl", "5");
	Pony stack3 = Pony("stack_Ponyboy", "6");

	stack1.say_number();
	stack1.running_arround();
	stack1.eating_carrot();
	stack2.say_number();
	stack2.running_arround();
	stack2.eating_carrot();
	stack3.say_number();
	stack3.running_arround();
	stack3.eating_carrot();
}
