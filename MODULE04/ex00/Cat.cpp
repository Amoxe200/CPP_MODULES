/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:13:43 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/01 23:27:34 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default Constructor Called"<<std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout<<"Cat Destructor Called"<<std::endl;
}

Cat::Cat(const Cat &old_obj)
{
    std::cout<<"Copy Constructor Called"<<std::endl;
    *this = old_obj;
}

Cat &Cat::operator =(Cat const &rhs)
{
    std::cout<<"Cat Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }

    return (*this);
}

void Cat::makeSound() const
{
    std::cout<<"Meeeow"<<std::endl;
}

