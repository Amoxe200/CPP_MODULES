/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:09:03 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 13:25:48 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
    
}
Intern::~Intern()
{
    
}

Intern::Intern(const Intern &old_obj)
{
    (void)old_obj;
}
Intern& Intern::operator =(Form const &rhs)
{
    (void)rhs;

    return (*this);
}

Form*  Intern::CreateShrubbery(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

Form*  Intern::CreateRobotomy(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

Form*  Intern::CreatePresidential(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}


Form* Intern::makeForm(std::string form_name, std::string target)
{
    Form* objects[3] = {
        new ShrubberyCreationForm(target),
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target)
    };
    
    std::string names[3] = {
        std::string("ShrubberyCreationForm"),
        std::string("PresidentialPardonForm"),
        std::string("RobotomyRequestForm")
    };

    for (int i = 0; i < 3; i++)
    {
        if (names[i] == form_name)
            return objects[i];
    }
    return NULL;
}