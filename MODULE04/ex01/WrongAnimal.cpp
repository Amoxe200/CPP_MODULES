/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:05:22 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 00:20:28 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout<<"Base Class Constructor"<<std::endl;
} // Default Constructor

WrongAnimal::~WrongAnimal(){
    std::cout<<"Base Class Destructor"<<std::endl;
} // Destructor

WrongAnimal::WrongAnimal(const WrongAnimal &old_obj)
{
    std::cout<<"WrongAnimal Copy Consructor"<<std::endl;
    *this = old_obj;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout<<"WrongAnimal Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout<<"Wrong Animal Sound"<<std::endl;
}