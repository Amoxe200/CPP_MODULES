/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:39:32 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 16:30:24 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav;
	ScavTrap scav_two("scaver");
	ScavTrap scav_three(scav);

	scav.attack("scaver");
	scav_three.attack("scaver");
	scav_three.guardGate();
	scav_two.takeDamage(10);
	scav_two.attack("scavTrap");

	return 0;
}