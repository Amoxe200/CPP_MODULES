/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 09:55:15 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 11:36:30 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    private:
    std::string name;
    unsigned int     hit_point;
    unsigned int     energy_point;
    unsigned int     attack_dammage;

    public:
    ClapTrap();//Default Constructor
    ClapTrap(std::string _name); //Parameteralized Constructor
    ~ClapTrap(void); // Destructor
    ClapTrap(const ClapTrap &old_obj); // Copy constructor
    ClapTrap &operator =(ClapTrap const &rhs); // Copy Assignment operator
    
    /* ------------------------------------------ */
    /*          Public Member Functions           */
    /* ------------------------------------------ */

    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif