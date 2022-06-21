/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:37:51 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/21 09:54:37 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string input;
    while(1)
    {
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