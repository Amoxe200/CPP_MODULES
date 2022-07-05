/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:13:50 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 02:39:41 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->dogBrain = new Brain();
    std::cout<<"Dog Default Constructor Called"<<std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout<<"Dog Destructor Called"<<std::endl;
    delete dogBrain;
}

Dog::Dog(const Dog &old_obj)
{
    std::cout<<"Copy Constructor Called"<<std::endl;
    *this = old_obj;
}

Dog &Dog::operator =(Dog const &rhs)
{
    std::cout<<"Dog Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
        this->dogBrain = new Brain();
        for (int i = 0; i < 100; i++)
        {
            
            this->dogBrain->set_ideas(rhs.dogBrain->get_idea(i),i);
        }
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout<<"Dog Barks"<<std::endl;
}

Brain* Dog::getbrain()
{
    return (this->dogBrain);
}
