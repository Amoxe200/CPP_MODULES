/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:30:31 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 02:36:31 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
    private:
    Brain *dogBrain;
    public : 
    Dog();//default
    ~Dog();//destructor
    Dog(const Dog &old_obj);//copy constructor
    Dog &operator =(Dog const &rhs);//Operator Overload
    void makeSound() const;
    Brain* getbrain();
};

#endif