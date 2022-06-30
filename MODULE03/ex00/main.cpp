/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:39:32 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 11:50:17 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	std::string name_p1 = "Hero";
	ClapTrap player1(name_p1);
	ClapTrap player2;

	player1.attack("ClapTrap");
	player2.takeDamage(10);
	player2.attack(name_p1);
	player1.takeDamage(10);
	player2.beRepaired(5);
	player2.attack("Hero");
	player1.takeDamage(10);

	return 0;
}