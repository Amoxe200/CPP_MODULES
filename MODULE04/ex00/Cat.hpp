/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:31:42 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/01 23:39:50 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    public : 
    Cat();//default
    ~Cat();//destructor
    Cat(const Cat &old_obj);//copy constructor
    Cat &operator =(Cat const &rhs);//Operator Overload
    void makeSound() const;
};

#endif