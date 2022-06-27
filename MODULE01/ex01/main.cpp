/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:28:11 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/27 05:17:01 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

struct A {
    int a;
};

int main(void)
{
    int n;
    int i;

    i = 0;
    n = 4;
    Zombie *zombies;
    std::cout<<"Calling the Zombie Horde"<<std::endl;
    zombies = zombieHorde(n, "Zombies");
    while (i < n)
    {
        zombies[i].announce();
        i++;
    }
    delete[] zombies;
    return 0;
}