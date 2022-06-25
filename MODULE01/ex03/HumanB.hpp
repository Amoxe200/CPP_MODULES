/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 03:45:13 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/25 12:27:25 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private: 
    std::string name;
    Weapon *weapon;

    public:
    HumanB();
    HumanB(std::string name_);
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif