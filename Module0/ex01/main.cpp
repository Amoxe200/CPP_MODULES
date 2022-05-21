/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:32:51 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/18 18:28:27 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string cmd;

    std::cout<<"-------> PHONEBOOK <-------" << std::endl;
    std::cout<< " -  Enter (ADD, SEARCH or EXIT) : " << std::endl;
    while (1)
    {
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            phonebook.add_contact();
        else if (cmd == "SEARCH")
            phonebook.printContact();
        else if (cmd == "EXIT")
        {
            std::cout<<"You Choose EXIT"<<std::endl;
            break;
        }
        else
            std::cout<<"Please Enter One of the following Keywords"<<std::endl;
    }
    return (0);
}