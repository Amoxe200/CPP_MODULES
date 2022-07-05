/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:21:27 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 00:22:23 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public : 
    WrongCat();//default
    ~WrongCat();//destructor
    WrongCat(const WrongCat &old_obj);//copy constructor
    WrongCat &operator =(WrongCat const &rhs);//Operator Overload
    void makeSound() const;
};

#endif