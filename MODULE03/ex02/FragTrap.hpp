/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:36:51 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 16:41:17 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    /* Flag trap default constructor*/
    FragTrap();/* Default Constructor */
    ~FragTrap();/* Destructor */
    FragTrap(std::string _frag); /* Parametrized constructor */
    FragTrap(const FragTrap &old_obj);  /* Copy Construtor */
    FragTrap& operator =(FragTrap const &rhs); /* Assignment operator overload */
    

    /* ------------------------------------------ */
    /*          Public Member Functions           */
    /* ------------------------------------------ */

    void highFiveGuys(void);
};

#endif