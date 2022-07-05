/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:52 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 11:58:18 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOT
#define ROBOT
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private: 
    static int value;
    public :
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(const RobotomyRequestForm &old_obj);
    RobotomyRequestForm& operator =(RobotomyRequestForm const &rhs);
    void execute(Bureaucrat const & executor) const;

};

#endif