/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:16:16 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/15 02:16:01 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <cctype>

int ft_error(int ac)
{
    if (ac <= 1)
    {
        std::cout<<"No Arguments Are Found !!!!!"<<std::endl;
        return (1);
    }
    return (0);
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;
	int counter;

    i = 1;  
    if (ft_error(ac) == 1)
        return (0);
    else
    {
        while (av[i])
        {
			counter = 0;
			while (counter < ft_strlen(av[i]))
			{
				av[i][counter] = toupper(av[i][counter]);
				counter++;
			}
			std::cout<<av[i];
            i++;
        }
    }
	std::cout<<std::endl;
    return (0);
}