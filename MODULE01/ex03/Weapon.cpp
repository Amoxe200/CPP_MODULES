/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 03:45:24 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/25 11:15:56 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};
Weapon::Weapon(const std::string& name_)
{
    this->type = name_;
}

void    Weapon::setType(const std::string& type_)
{
    this->type = type_;
}

const std::string& Weapon::getType() const
{
    const std::string& ref = this->type;

    return (ref);
}