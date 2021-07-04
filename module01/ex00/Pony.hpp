/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:17:32 by spark             #+#    #+#             */
/*   Updated: 2021/07/04 16:09:59 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
	private:
		std::string name;
		std::string number;
	public:
		Pony(std::string _name, std::string _number);
		void say_number(void);
		void running_arround(void);
		void eating_carrot(void);
		~Pony();
};

void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);

#endif
