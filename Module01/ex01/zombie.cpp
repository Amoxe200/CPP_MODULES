/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:03:58 by amoxe             #+#    #+#             */
/*   Updated: 2022/06/01 15:12:39 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include <iostream>

Zombie::Zombie(){}

Zombie::Zombie(std::string f_name)
{
    this->name = f_name;
}

Zombie::~Zombie(){
    std::cout<<this->name<<" Is Destroyed"<<std::endl;
}

void Zombie::set_name(std::string name){
    this->name = name;
}

std::string Zombie::get_name()
{
    return(this->name);
}

void Zombie::announce(void)
{
    std::string name;

    name = this->get_name();
    std::cout<<name<<" : BraiiiiiiinnnzzzZ.."<<std::endl;
}