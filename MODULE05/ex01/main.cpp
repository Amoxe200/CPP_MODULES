/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 07:10:07 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 10:54:34 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try {
        Bureaucrat bureaucrat("Bure", 5);
        Form form("form", 10, 6);

        bureaucrat.signForm(form);
    }
    catch (std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}