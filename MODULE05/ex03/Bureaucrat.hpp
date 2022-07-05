/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 06:55:00 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 13:51:20 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
    const std::string name;
    int     range;

    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &old_obj);
    Bureaucrat& operator=(Bureaucrat const &rhs);
    void    incrementGrade();
    void		decrementGrade();
    std::string getName() const;
    int getGrade() const;
    void signForm(Form &form);
    void executeForm(Form const & form);

    class GradeTooHighException : public std::exception
    {
        public :
        const char * what() const throw()
        {
            return ("Grade too high");
        }
    };

    class GradeTooLowException : public std::exception
    {
        public :
        const char * what() const throw()
        {
            return ("Grade too Low");
        }
    };
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &rhs);


#endif