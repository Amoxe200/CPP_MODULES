/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 05:05:26 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/29 15:37:01 by aaqari           ###   ########.fr       */
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

Fixed::Fixed(int const n)
{
    std::cout<<"Int Constructor called"<<std::endl;
    this->fixed_point = n << this->fractional_bits;
}

Fixed::Fixed(float const f)
{
    std::cout<<"Float Constructor called"<<std::endl;
    this->fixed_point = (float)(round(f * (1 << this->fractional_bits)));
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
    std::cout<<"getRawBit Memmber function called"<<std::endl;
    return (fixed_point);
}

void Fixed::setRawBits(int const fractional_bits)
{
    std::cout<<"SetRawBit Memmber function called"<<std::endl;
    this->fixed_point = fractional_bits;
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixed_point/(float)( 1 << this->fractional_bits));
}

int Fixed::toInt(void) const 
{
    return (this->fixed_point >> this->fractional_bits);
}


std::ostream & operator <<(std::ostream &out, Fixed const &rhs)
{
    out << rhs.toFloat();

    return (out);
}