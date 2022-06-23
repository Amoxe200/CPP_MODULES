/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:37:51 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/23 10:06:46 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    while(!std::cin.eof())
    {
        std::string input;
        std::cout<<"Enter One of the following commandes : (ADD , SEARCH, EXIT)"<<std::endl; 
        std::getline(std::cin, input);
        if (input == "ADD")
            phonebook.add_contact();
        else if (input == "SEARCH")
            phonebook.print_contact();
        else if (input == "EXIT")
            break;
        else
            std::cout<<"ERROR in command"<<std::endl;

    }
    return (0);
}