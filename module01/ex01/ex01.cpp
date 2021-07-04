/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:22:41 by spark             #+#    #+#             */
/*   Updated: 2021/07/04 16:46:32 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() 
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	
	delete(panther);
}

int	main (void)
{
	memoryLeak();
	return (0);
}