/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:41 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 12:00:31 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::value = 0;

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old_obj)
{
    (void)old_obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator =(RobotomyRequestForm const &rhs)
{
    (void)rhs;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() && executor.getGrade() <= this->getExec())
    {
        value++;
        if (value % 2 == 0)
            std::cout<<this->getName()<< " Has Been Robotomized " << std::endl;
        else
            std::cout<<" Robotonomy failed "<< std::endl;
    }
    else
    {
        throw Form::GradeTooHighException();
    }
}