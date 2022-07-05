/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:58:14 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 13:13:54 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
    const std::string name;
    bool _signed;
    const int grade;
    const int exec;


    public:
    Form();
    ~Form(); 
    Form(std::string name, int grade, int exec);
    Form(const Form &old_obj);
    Form& operator =(Form const &rhs);
    std::string getName() const;
    bool getSign() const;
    int getGrade() const;
    int getExec() const;
    void beSigned(const Bureaucrat& bureaucrat);
    class GradeTooHighException : public std::exception
    {
        public :
        const char * what() const throw()
        {
            return ("Form Grade too high");
        }
    };

     class GradeTooLowException : public std::exception
    {
        public :
        const char * what() const throw()
        {
            return ("Form Grade too Low");
        }
    };
    
};

std::ostream& operator<<(std::ostream &out, Form const &rhs);








#endif