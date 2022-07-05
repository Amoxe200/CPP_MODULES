/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:03:37 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 12:01:02 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj)
{
    (void)old_obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator =(ShrubberyCreationForm const &rhs)
{
    (void)rhs;
    return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream out_file;

    out_file.open((this->getName() + "_shrubbery"), std::ios::out);
    
    if (this->getSign() && executor.getGrade() <= this->getExec())
    {
        if (out_file.is_open())
		{
			out_file
				<<"		 A		\n"
				<<"		d$b		\n"
				<<"  	      .d\\$$b.		\n"
				<<"	    .d$i$$\\$$b.	\n"
				<<"	       d$$@b		\n"
				<<"	      d\\$$$ib		\n"
				<<"	    .d$$$\\$$$b		\n"
				<<"	  .d$$@$$$$\\$$ib.	\n"
				<<"	      d$$i$$b			\n"
				<<"	     d\\$$$$@$b		\n"
				<<"	  .d$@$$\\$$$$$@b.	\n"
				<<"	.d$$$$i$$$\\$$$$$$b.		\n"
				<<"		###			\n"
				<<"		###			\n"
				<<"		###\n";
			out_file.close();
		}
		else
			std::cerr << "File Creation Failed\n";
    }
    else
    {
        throw Form::GradeTooHighException();
    }
    
}