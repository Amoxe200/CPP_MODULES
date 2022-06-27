/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:38:33 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/26 04:47:13 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string         s1;
    std::string  toReplace;
    std::string     replaceWith;
    std::string extension;
    std::ifstream in_file;
    std::ofstream out_file;

    if (ac < 4)
    {
        std::cout<<"Error In Args"<<std::endl;
        return (0);
    }

    toReplace = av[2];
    replaceWith = av[3];
    extension = std::string(av[1]) + ".replace";
    in_file.open(av[1], std::ios::in);
    out_file.open(extension, std::ios::in | std::ios::out | std::ios::trunc);
	if (toReplace == replaceWith)
		return (0);
    if (in_file.is_open() && out_file.is_open())
    {
        
        while (std::getline(in_file, s1))
        {
            std::size_t pos = s1.find(toReplace);
            while(pos != std::string::npos)
			{
				s1.erase(pos, toReplace.length());
				s1.insert(pos, replaceWith);
				pos = s1.find(toReplace, pos + 1);
			}
            out_file << s1 << "\n";
        }
    }
    else
    {
        std::cout<<"Cannot Read File"<<std::endl;
    }

    in_file.close();
    out_file.close();
    return (0);
}