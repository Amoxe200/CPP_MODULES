/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 07:10:07 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 13:11:01 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    try {
        Bureaucrat bureaucrat("Bure", 151);
        std::cout<<bureaucrat<<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
}