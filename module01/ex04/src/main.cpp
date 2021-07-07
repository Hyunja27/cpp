/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/07 21:33:55 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

int main(int ac, char *av[])
{
    
    if (ac != 4)
    {
        std::cout << "Args num is not Good..." << std::endl;
        return (-1);
    }
    
    std::string filename = av[1];
    std::string to_find = av[2];
    std::string replace = av[3];
    std::string line;
    std::ifstream fin("sed.txt");
    std::ofstream fo("sed.txt.replace");
    if (fin.fail() || fo.fail())
    {
        std::cout << "file not exist...." << std::endl;
        return (-1);
    }
    while (true)
    {
        fo << getline(fin, line);
    }
   
    return (0);
}