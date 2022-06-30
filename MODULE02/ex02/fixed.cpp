/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:12:04 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/29 15:19:39 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

/* ---------------------------------------- */
/*   Consturctor and = operator overload    */ 
/* ---------------------------------------- */

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
    this->fixed_point = round(f * (1 << this->fractional_bits));
}

Fixed::~Fixed()
{
    std::cout<<"Destructor Executed"<<std::endl;
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

/* ---------------------------------------- */
/*           COMPARISON OPERATOR            */ 
/* ---------------------------------------- */

bool Fixed::operator==(Fixed const &rhs)
{
    return (this->fixed_point == rhs.fixed_point);
}

bool Fixed::operator<=(Fixed const &rhs)
{
    return (this->fixed_point <= rhs.fixed_point);
}

bool Fixed::operator>=(Fixed const &rhs)
{
    return (this->fixed_point >= rhs.fixed_point);
}

bool Fixed::operator>(Fixed const &rhs)
{
    return (this->fixed_point > rhs.fixed_point);
}

bool Fixed::operator<(Fixed const &rhs)
{
    return (this->fixed_point < rhs.fixed_point);
}

bool Fixed::operator !=(Fixed const &rhs)
{
    return (this->fixed_point != rhs.fixed_point);
}


/* ---------------------------------------- */
/*           ARITHMETIC OPERATORS           */ 
/* ---------------------------------------- */

Fixed Fixed::operator+(Fixed const &rhs)
{
    Fixed ret(*this);
    ret.setRawBits(this->fixed_point + rhs.fixed_point);
    return ret;
}

Fixed Fixed::operator-(Fixed const &rhs)
{
    Fixed ret(*this);
    ret.setRawBits(this->fixed_point - rhs.fixed_point);
    return ret;
}

Fixed Fixed::operator*(Fixed const &rhs)
{
    Fixed ret(*this);
    ret.setRawBits((this->fixed_point * rhs.fixed_point) >> 8);

    return ret;
}

Fixed Fixed::operator/(Fixed const &rhs)
{
    Fixed ret(*this);
    ret.setRawBits((this->fixed_point << this->fractional_bits) / rhs.getRawBits());
    return ret;
}

/* -------------------------------------------- */
/*     Pre increment and post increment         */
/*     pre decrement and post decrement          */ 
/* -------------------------------------------- */

Fixed& Fixed::operator++()
{
    this->fixed_point++;

    return (*this);
}

Fixed Fixed::operator++( int )
{
    int copy = this->fixed_point;
    this->fixed_point++;
    return(copy);
}

Fixed& Fixed::operator--()
{
    this->fixed_point--;

    return (*this);
}

Fixed Fixed::operator--( int )
{
    int copy = this->fixed_point;
    this->fixed_point--;
    return(copy);
}

/* -------------------------------------------- */
/*              Getters And setters             */
/* -------------------------------------------- */

int Fixed::getRawBits(void) const
{
    std::cout<<"GetRawbit Memmber function called"<<std::endl;
    return (fixed_point);
}

void Fixed::setRawBits(int const fractional_bits)
{
    std::cout<<"GetRawbit Memmber function called"<<std::endl;
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

/* -------------------------------------------- */
/*      Overloaded Member Function              */
/* -------------------------------------------- */

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.fixed_point < b.fixed_point)
        return a;
    else
        return b;    
}


Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.fixed_point > b.fixed_point)
        return a;
    else
        return b;
}

Fixed &		Fixed::min( Fixed &a, Fixed &b )
{
    if (a.fixed_point < b.fixed_point)
        return a;
    else
        return b;
}

Fixed &     Fixed::max(Fixed &a, Fixed &b)
{
    if (a.fixed_point > b.fixed_point)
        return a;
    else
        return b;
}