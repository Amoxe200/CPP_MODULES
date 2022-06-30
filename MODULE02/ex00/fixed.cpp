/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 07:19:47 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/30 10:29:44 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(){
    std::cout<<"Constructor executed"<<std::endl;
    this->fixed_point = 0;
};


Fixed::Fixed(Fixed const &src){
    std::cout<<"Copy Constrcutor Executed"<<std::endl;
    *this = src;
}

Fixed& Fixed::operator =(Fixed const &rhs)
{
    std::cout<<"Operator Overload called"<<std::endl;
    if (this != &rhs)
    {
        this->fixed_point = rhs.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor Executed"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits Memmber function called"<<std::endl;
    return (fixed_point);
}

void Fixed::setRawBits(int const fractional_bits)
{
    std::cout<<"SetRawBit Memmber function called"<<std::endl;
    this->fixed_point = fractional_bits;
}