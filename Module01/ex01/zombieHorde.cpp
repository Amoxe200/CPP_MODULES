/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:56:17 by amoxe             #+#    #+#             */
/*   Updated: 2022/06/01 15:14:22 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie *zomebiHorde(int n, std::string name)
{
    int i;
    i = 0;

    Zombie *zombieHorde = new Zombie[n];
    
    while (i < n)
    {
        zombieHorde[i].set_name(name);
        i++;
    }

    return (zombieHorde);
}