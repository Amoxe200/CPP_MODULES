/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:12:01 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/29 15:22:42 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <fstream>


class Fixed
{
    private: 
    int fixed_point;
    static const int fractional_bits = 8;

    public:
    Fixed(void); // default constructor
    Fixed(Fixed const &src); // Copy constructor
    Fixed(int const n);
    Fixed(float const f);
    ~Fixed(void); // Destructor
    Fixed &operator =(Fixed const &rhs); //Copy Assignment Operator
    Fixed operator +(Fixed const &rhs);
    Fixed operator -(Fixed const &rhs);
    Fixed operator *(Fixed const &rhs);
    Fixed operator /(Fixed const &rhs);
    
    bool operator ==(Fixed const &rhs);
    bool operator >(Fixed const &rhs);
    bool operator <(Fixed const &rhs);
    bool operator >=(Fixed const &rhs);
    bool operator <=(Fixed const &rhs);
    bool operator !=(Fixed const &rhs);


    
    Fixed& operator ++();
    Fixed& operator --();

    Fixed operator ++( int );
    Fixed operator --( int );

    int getRawBits(void) const;
    void setRawBits(int const fractional_bits);
    float	toFloat(void) const;
    int		toInt(void) const;


    static Fixed const &	min( Fixed const &a, Fixed const &b );
    static Fixed const &	max( Fixed const &a, Fixed const &b );
    static Fixed &		min( Fixed &a, Fixed &b );
    static Fixed &		max( Fixed &a, Fixed &b );

};

std::ostream & operator <<(std::ostream &out, Fixed const &rhs);

#endif