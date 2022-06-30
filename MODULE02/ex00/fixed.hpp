/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 03:39:35 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/29 06:05:11 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
    private: 
    int fixed_point;
    static const int fractional_bits = 8;

    public:
    Fixed(void); // default constructor
    Fixed(Fixed const &src); // Copy constructor
    ~Fixed(void); // Destructor
    Fixed &operator =(Fixed const &rhs); //Copy Assignment Operator
    int getRawBits(void) const;
    void setRawBits(int const fractional_bits);
};



#endif