/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:59:00 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/29 13:15:34 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(std::string f_name){
    this->name = f_name;
}

Zombie::~Zombie(){

 std::cout<<this->name<<" is Destroyed"<<std::endl;
}

std::string Zombie::get_name()
{
    return(this->name);
}

void Zombie::annonce(void)
{
    std::string name;

    name = this->get_name();
    std::cout<<name<<" : BraiiiiiiinnnzzzZ.."<<std::endl;
}