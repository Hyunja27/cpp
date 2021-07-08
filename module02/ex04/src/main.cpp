/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunja <hyunja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:08:38 by spark             #+#    #+#             */
/*   Updated: 2021/07/08 01:45:30 by hyunja           ###   ########.fr       */
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
    std::string to_replace = av[3];
    std::string raw_line;
    std::string edited_line;
    std::ifstream fin(filename);
    std::ofstream fo(filename + ".replace");
    int i = -1;
    if (fin.fail() || fo.fail())
    {
        std::cout << "file not exist...." << std::endl;
        return (-1);
    }
    while (!fin.eof())
    {
        getline(fin, raw_line);
        while (raw_line[++i])
        {
            if(raw_line[i] == to_find[0])
            {
                if (strncmp(&raw_line[i], &to_find[0], to_find.length()) == 0)
                {
                    if (to_find.length() > 1)
                        i += to_find.length();
                    edited_line += to_replace;
                }
                else
                    edited_line += raw_line[i];
            }
            else
                edited_line += raw_line[i];
        }
        i = -1;
        fo << edited_line;
        if (!fin.eof())
            fo << std::endl;
        edited_line.clear();
    }
    fin.close();
    fo.close();

    return (0);
}