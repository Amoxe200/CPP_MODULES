/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:03:38 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 12:04:17 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY
#define SHRUBERRY
#include "Form.hpp"
#include <fstream>


class ShrubberyCreationForm : public Form
{

    public :
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(const ShrubberyCreationForm &old_obj);
    ShrubberyCreationForm& operator =(ShrubberyCreationForm const &rhs);

   void execute(Bureaucrat const & executor) const;

};



#endif