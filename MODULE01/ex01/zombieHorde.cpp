/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 03:50:07 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/25 02:07:04 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    int i;
    i = 0;

    Zombie* horde = new Zombie[n];
    while (i < n)
    {
        horde[i].set_name(name);
        i++;
    }
	return(horde);
}