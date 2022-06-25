/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 03:45:09 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/25 12:21:04 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){};

HumanB::HumanB(std::string name_)
{
    this->name = name_;
}

void    HumanB::attack()
{
    std::cout<<this->name<<" Attacked With Their "<<this->weapon->getType()<<std::endl;
}

void    HumanB::setWeapon(Weapon &weapon_)
{
    this->weapon = &weapon_;
}