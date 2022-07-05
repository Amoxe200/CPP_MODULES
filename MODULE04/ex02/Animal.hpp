/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:27:42 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 03:09:24 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "brain.hpp"

class Animal
{
    protected: 
    std::string type;

    public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &old_obj);
    Animal &operator =(Animal const &rhs);
    virtual void makeSound() const = 0;
    std::string getType() const;
    virtual Brain* getbrain() = 0;
};


#endif