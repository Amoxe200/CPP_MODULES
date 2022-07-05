/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:08:59 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 12:18:33 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

    private:
    Form*  CreateShrubbery(const std::string& target);
    Form*  CreateRobotomy(const std::string& target);
    Form* CreatePresidential(const std::string& target);

    
    
    public:
    Intern();
    ~Intern();
    Intern(const Intern &old_obj);
    Intern& operator =(Form const &rhs);
    Form* makeForm(std::string form_name, std::string target);
    
    

};





#endif