/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:28:15 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/24 03:45:18 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* new_zombie(std::string name)
{
    Zombie *newZombie = new Zombie();
    newZombie->set_name(name);

    return (newZombie);
}