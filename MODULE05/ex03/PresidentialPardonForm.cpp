/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:10:49 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 12:00:12 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old_obj)
{
    (void)old_obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator =(PresidentialPardonForm const &rhs)
{
    (void)rhs;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() && executor.getGrade() <= this->getExec())
    {
        std::cout<<this->getName()<< " Has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
    {
        throw Form::GradeTooHighException();
    }
}
