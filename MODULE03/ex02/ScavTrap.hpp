/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:41:05 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 16:38:51 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:
   /* scav Trap default constructor */
    ScavTrap();/* Default Constructor */
    ~ScavTrap(); /* Destructor */
    ScavTrap(std::string _scav); /* Parametrized constructor */
    ScavTrap(const ScavTrap &old_obj); /* Copy Construtor */
    ScavTrap &operator =(ScavTrap const &rhs);/* Assignment operator overload */

    /* ------------------------------------------ */
    /*          Public Member Functions           */
    /* ------------------------------------------ */

    void    attack(const std::string &target);
    void    guardGate();
};

#endif