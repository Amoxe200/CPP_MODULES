/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:13:50 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/01 23:28:15 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Default Constructor Called"<<std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout<<"Dog Destructor Called"<<std::endl;
}

Dog::Dog(const Dog &old_obj)
{
    std::cout<<"Copy Constructor Called"<<std::endl;
    *this = old_obj;
}

Dog &Dog::operator =(Dog const &rhs)
{
    std::cout<<"Dog Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }

    return (*this);
}

void Dog::makeSound() const
{
    std::cout<<"Dog Barks"<<std::endl;
}

