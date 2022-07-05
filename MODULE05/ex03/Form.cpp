/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:58:04 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 11:17:04 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("") , grade(-1), exec(-1)
{
    
}
    
Form::~Form()
{
    
}

Form::Form(std::string _name, int _grade, int _exec) : name(_name), _signed(false), grade(_grade), exec(_exec)
{
    if (_grade < 1 || _exec < 1) 
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


Form::Form(const Form &old_obj) : grade(old_obj.grade), exec(old_obj.exec)
{
    *this = old_obj;
}
Form& Form::operator =(Form const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    
    return (*this);
}

std::string Form::getName() const
{
    return(this->name);
}

bool Form::getSign() const
{
    return(this->_signed);
}
int Form::getGrade() const
{
    return (this->grade);
}
int Form::getExec() const
{
    return (this->exec);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() <= this->grade)
    {
        _signed = true;
    }
    else
        throw Form::GradeTooHighException();
}

std::ostream& operator<<(std::ostream &out, Form const &rhs)
{
    out<<" Name "<<rhs.getName() << " Signed " << rhs.getSign() << " Grade " << rhs.getGrade() << "Execut " << rhs.getExec();

    return (out);
}

