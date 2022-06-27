/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:28:11 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/27 04:54:09 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout<<"Creating a Zombie object and announce it"<<std::endl;
    Zombie zombie;
    zombie.set_name("Zombie");
    zombie.announce();
    
    std::cout<<"-------------------------------------------"<<std::endl;
    std::cout<<"Creating a Zombie using newZombie Function"<<std::endl;

    Zombie* new_Zombie;
    new_Zombie = newZombie("NewZombie");
    delete new_Zombie;

    std::cout<<"------------------"<<std::endl;
    std::cout<<"Calling Random Chump function"<<std::endl;
    randomChump("RandomChump");

    return (0);
}