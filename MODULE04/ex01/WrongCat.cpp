/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:22:39 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 00:23:08 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat Default Constructor Called"<<std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat Destructor Called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &old_obj)
{
    std::cout<<"WrongCat Copy Constructor Called"<<std::endl;
    *this = old_obj;
}

WrongCat &WrongCat::operator =(WrongCat const &rhs)
{
    std::cout<<"WrongCat Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
    }

    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout<<"Wrong Cat MEOOOOOW "<<std::endl;
}
