/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 03:45:03 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/25 12:26:20 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon_) : weapon(weapon_) , name(name_){};

void    HumanA::attack()
{
    std::cout<<this->name<<" Attacked With Their "<<this->weapon.getType()<<std::endl;
}