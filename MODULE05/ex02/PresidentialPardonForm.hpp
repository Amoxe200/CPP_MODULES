/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:10:53 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 12:04:21 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT
#define PRESIDENT
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

    public :
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(const PresidentialPardonForm &old_obj);
    PresidentialPardonForm& operator =(PresidentialPardonForm const &rhs);
    void execute(Bureaucrat const & executor) const;

};

#endif