/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:13:43 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 02:37:41 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<<"Cat Default Constructor Called"<<std::endl;
    this->type = "Cat";
    this->catBrain = new Brain();
}

Cat::~Cat()
{
    std::cout<<"Cat Destructor Called"<<std::endl;
    delete catBrain;
}

Cat::Cat(const Cat &old_obj)
{
    std::cout<<"Copy Constructor Called"<<std::endl;
    *this = old_obj;
}

Cat &Cat::operator =(Cat const &rhs)
{
    std::cout<<"Cat Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
        this->catBrain = new Brain();
        for (int i = 0; i < 100; i++)
        {
            
            this->catBrain->set_ideas(rhs.catBrain->get_idea(i),i);
        }
    }

    return (*this);
}

void Cat::makeSound() const
{
    std::cout<<"Meeeow"<<std::endl;
}

Brain* Cat::getbrain()
{
    return (this->catBrain);
}
