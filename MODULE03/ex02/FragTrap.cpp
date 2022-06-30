/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:36:33 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 16:54:51 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

   /* ------------------------------------------ */
   /*                Constructors                */
   /* ------------------------------------------ */

/* default constructor */

FragTrap::FragTrap() : ClapTrap()
{
    std::cout<<"-FragTrap Default Constructor called"<<std::endl;
    this->name = "Frag";
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_dammage = 30;
}

/* Parametierized Constructor */
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"-FragTrap Parameterized constructor called"<<std::endl;
    this->name = name;
    this->hit_point = 100;
    this->energy_point = 100;
    this->attack_dammage = 30;
}

/* copy constructor */
FragTrap::FragTrap(const FragTrap &old_obj)
{
    std::cout<<"-FragTrap Copy constructor called"<<std::endl;
    *this = old_obj;
}

FragTrap::~FragTrap()
{
    std::cout<<"-FragTrap destructor called"<<std::endl;
}

/* Assignment operator overload */

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
    std::cout<<"-FragTrap Operator Overload Called"<<std::endl;
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->hit_point = rhs.hit_point;
        this->energy_point = rhs.energy_point;
        this->attack_dammage = rhs.energy_point; 
    }

    return *this;
}

    /* ------------------------------------------ */
    /*                Member Functions            */
    /* ------------------------------------------ */

void FragTrap::highFiveGuys(void)
{
    std::cout<<"Positive High Five"<<std::endl;
}