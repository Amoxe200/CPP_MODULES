/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:28:21 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/24 03:45:43 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout<<"Constructor Executed"<<std::endl;
};

Zombie::~Zombie()
{
    std::cout<<"Destructor Executed"<<std::endl;
    std::cout<<this->name<<" is Destroyed "<< std::endl;
}

void    Zombie::set_name(std::string zombie_name)
{
    this->name = zombie_name;
}

std::string Zombie::get_name(void)
{
    return (this->name);
}

void    Zombie::announce(void)
{
    std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}