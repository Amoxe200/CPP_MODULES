/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 05:05:38 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/29 07:59:55 by aaqari           ###   ########.fr       */
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
    int getRawBits(void) const;
    void setRawBits(int const fractional_bits);
    float	toFloat(void) const;
    int		toInt(void) const;
};

std::ostream & operator <<(std::ostream &out, Fixed const &rhs);

#endif