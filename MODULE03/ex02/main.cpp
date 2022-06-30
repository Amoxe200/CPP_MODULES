/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:39:32 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 16:54:04 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap frag;
	FragTrap frag_two("frager");
	FragTrap frag_three(frag);

	frag.attack("frager");
	frag_three.attack("frager");
	frag_three.highFiveGuys();
	frag_two.takeDamage(10);
	frag_two.attack("fragTrap");

	return 0;
}