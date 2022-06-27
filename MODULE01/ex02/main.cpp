/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 02:31:31 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/27 05:19:09 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string		brain = "HI THIS IS BRAIN.";
    std::string*	stringPTR = &brain;
    std::string&	stringREF = brain;

	std::cout<<"The Memory Address of the string Variable : "<<std::endl;
	std::cout<<&brain<<std::endl;
	
	std::cout<<"The Memory Address Held by stringPTR : "<<std::endl;
	std::cout<<stringPTR<<std::endl;

	std::cout<<"The Memory Address held by stringREF : "<<std::endl;
	std::cout<<&stringREF<<std::endl;
	
	std::cout<<"---------------------------------------------"<<std::endl;

	std::cout<<"The value pointed to by stringPTR"<<std::endl;
	std::cout<<*stringPTR<<std::endl;

	std::cout<<"The value pointed to by stringREF"<<std::endl;
	std::cout<<stringREF<<std::endl;

	return (0);
}