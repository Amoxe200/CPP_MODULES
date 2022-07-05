/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:27:40 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 01:56:11 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout<<"Base Class Constructor"<<std::endl;
} // Default Constructor

Animal::~Animal(){
    std::cout<<"Base Class Destructor"<<std::endl;
} // Destructor

Animal::Animal(const Animal &old_obj)
{
    std::cout<<"Animal Copy Consructor"<<std::endl;
    *this = old_obj;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout<<"Animal Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

void Animal::makeSound() const
{
    std::cout<<"Random Sound of animal"<<std::endl;
}

std::string Animal::getType() const
{
    return(this->type);
}