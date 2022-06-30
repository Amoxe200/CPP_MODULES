/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:00:40 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 11:47:09 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

    /* ------------------------------------------ */
    /*                Constructors                */
    /* ------------------------------------------ */

// Default Constructor

ClapTrap::ClapTrap()
{
    std::cout<<" Default Constructor called "<<std::endl;
    this->name = "ClapTrap";
    this->hit_point = 10;
    this->energy_point = 10;
    this->attack_dammage = 0;   
}

ClapTrap::ClapTrap(std::string _name)
{
    std::cout<<" Parameterized Default Constructor Called "<<std::endl;
    this->name = _name;
    this->hit_point = 10;
    this->energy_point = 10;
    this->attack_dammage = 0;
}
//Destructor
ClapTrap::~ClapTrap(void)
{
    std::cout<<"Destructor Called"<<std::endl;
}

//Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
    std::cout <<"Copy constructor called"<<std::endl;
    *this = old_obj;
}

//Assignment Operator Overload
ClapTrap& ClapTrap::operator =(ClapTrap const &rhs)
{
    std::cout << " Assignment Operator Called " << std::endl;

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

void ClapTrap::attack(const std::string &target)
{
    if (this->energy_point > 0 && this->hit_point > 0)
    {
        this->energy_point--;
        std::cout<<" ClapTrap "<< this->name <<" Attacks "<<target<<" Causing "
        <<this->hit_point<<"Point of damage"<<std::endl;
    }
    else
    {
        std::cout<<this->name
        <<" Can't attack either he is dead or not enough hit points "<<std::endl;   
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
    if (this->energy_point > 0)
    {
        this->energy_point--;
        this->hit_point -= amount;
        std::cout<<" ClapTrap "<<this->name
        <<" Took a damage of " << amount << std::endl; 
    }
    else
    {
        std::cout<<this->name<<"Already Dead"<<std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_point > 0)
    {
        std::cout<<" ClapTrap "<<this->name<<" Gets " << amount << " Of hit point back "<< std::endl;
        this->hit_point += amount;
        this->energy_point--;
    }
    else
    {
        std::cout<< this->name << " Can't be repaired because he is dead " << std::endl;
    }
}