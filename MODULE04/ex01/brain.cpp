/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:34:04 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 01:58:13 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(){
    std::cout<<"Base Class Constructor"<<std::endl;
} // Default Constructor

Brain::~Brain(){
    std::cout<<"Base Class Destructor"<<std::endl;
} // Destructor

Brain::Brain(const Brain &old_obj)
{
    std::cout<<"Brain Copy Consructor"<<std::endl;
    *this = old_obj;
}

Brain &Brain::operator=(Brain const &rhs)
{
    int i;

    i = 0;
    std::cout<<"Brain Operator Overload"<<std::endl;
    if (this != &rhs)
    {
        while (i < 100)
        {
            this->ideas[i] = rhs.ideas[i];
            i++;
        }
    }
    return (*this);
}

void    Brain::set_ideas(std::string idea, int i)
{

    this->ideas[i] = idea;
}

std::string Brain::get_idea(int i) const
{
    return (this->ideas[i]);
}