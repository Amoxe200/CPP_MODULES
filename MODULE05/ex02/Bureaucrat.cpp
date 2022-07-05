/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 06:54:56 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 13:49:10 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string _name, int grade) : name(_name), range(grade)
{
    std::cout<<"Parameterized constructor called"<<std::endl;

    if (grade < 1)
     throw Bureaucrat::GradeTooHighException();
     else if (grade > 150)
         throw Bureaucrat::GradeTooLowException();
     else
         this->range = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Destrucor called"<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &old_obj)
{
    *this = old_obj;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
        this->range = rhs.range;
    return (*this);
}

void			Bureaucrat::incrementGrade()
{
	if (this->range - 1 < 1)
		throw(GradeTooHighException());
	else
	{
		std::cout << "Grade Has Been Incremented\n";
		this->range--;
	}
}

void			Bureaucrat::decrementGrade()
{
	if (this->range + 1 > 150)
		throw(GradeTooLowException());
	else
	{
		std::cout << "Grade Has Been Decremented\n";
		this->range++;
	}
}

std::string Bureaucrat::getName() const
{
    return(this->name);
}

int Bureaucrat::getGrade() const
{
    return(this->range);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &rhs)
{
    out<<rhs.getName()<<", Bureaucrat Grade " << rhs.getGrade();

    return (out);
}

void Bureaucrat::signForm(Form &form)
{
    try{
        form.beSigned(*this);
        std::cout<< (*this) << " signed "  << form << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<< (*this) << " Bureaucrat couldn't sign "  << form << " because " << e.what() << std::endl;
    }
   
}

void    Bureaucrat::executeForm(Form const & form)
{
    try{
        form.execute(*this);
        std::cout<< *this << " executed " << form << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<< " Form cannot be executed because " <<e.what() <<std::endl;
    }
}