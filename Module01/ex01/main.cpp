/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:00:33 by amoxe             #+#    #+#             */
/*   Updated: 2022/06/01 15:15:52 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
    int n;
    int i;
    
    i = 0;
    n = 5;
    std::cout<<"Creating a horde of Zombies"<<std::endl;
    Zombie *zombieHorde = zomebiHorde(n, "Zombie");

    while (i < n)
    {
        zombieHorde[i].announce();
        i++;
    }
    delete[] zombieHorde;

    return (0);
}