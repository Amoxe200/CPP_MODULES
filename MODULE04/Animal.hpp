/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:27:42 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/01 12:56:16 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected: 
    std::string type;


    public:
    Animal();
    ~Animal();
    Animal(const Animal &old_obj);
    Animal &operator =(Animal const &rhs);
};


#endif