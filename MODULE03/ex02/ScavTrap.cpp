/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:49:30 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 16:44:58 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

   /* ------------------------------------------ */
   /*                Constructors                */
   /* ------------------------------------------ */

/* Default Constructor */
ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout<<"-ScavTrap Default constructor called "<<std::endl;
    this->name = "scave";
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_dammage = 20;
}

/* Parameterized Constructor */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"-ScavTrap Parameterized constructor called "<<std::endl;
    this->name = name;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_dammage = 20;
}

/* Copy Constructor */
ScavTrap::ScavTrap(const ScavTrap &old_obj)
{
    std::cout<<"-ScavTrap Copy contsructor called"<<std::endl;
    *this = old_obj;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"-ScavTrap Destructor called"<<std::endl;
}


/* assignment operator overload */
ScavTrap& ScavTrap::operator =(ScavTrap const &rhs)
{
    std::cout<<"-ScavTrap Operator Overload Called"<<std::endl;
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

void ScavTrap::attack(const std::string &target)
{
    if (this->energy_point > 0 && this->hit_point > 0)
    {
        this->energy_point--;
        std::cout<<" ScavTrap "<< this->name <<" Attacks "<<target<<" Causing "
        <<this->hit_point<<"Point of damage"<<std::endl;
    }
    else
    {
        std::cout<<this->name
        <<" Can't attack either he is dead or not enough hit points "<<std::endl;   
    }
}

void    ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<< this->name << " is now in Gate keeper mode " << std::endl;
}