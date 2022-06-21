/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:59:16 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/21 10:07:14 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->num_contact = -1;
}

int PhoneBook::checker(std::string check)
{
    if (check.empty())
        return (1);
    return (0);
}

int PhoneBook::is_digit(std::string phoneNumber)
{
	int i;

	i = 0;
	while (phoneNumber[i])
	{
		if (isdigit(phoneNumber[i]))
			i++;
		else
		{
			return (1);
			break;
		}
	}
	return (0);
}

void    PhoneBook::add_contact()
{
    std::string firstName, lastName, nickName, darkestSecret, phoneNumber;

	std::cout<<"Enter First Name"<<std::endl;
    std::getline(std::cin, firstName);
    while (PhoneBook::checker(firstName))
    {
        std::cout<<"ERROR : No FirstNAme Please Enter First Name"<<std::endl;
        std::getline(std::cin, firstName);
    }

    std::cout<<"Enter Last Name"<<std::endl;
    std::getline(std::cin, lastName);
    while (PhoneBook::checker(lastName))
    {
        std::cout<<"ERROR : No LastName Please Enter LastName"<<std::endl;
        std::getline(std::cin, lastName);
    }

    std::cout<<"Enter Nick Name"<<std::endl;
    std::getline(std::cin, nickName);
    while (PhoneBook::checker(nickName))
    {
        std::cout<<"ERROR : No NickName Please Enter NickName"<<std::endl;
        std::getline(std::cin, nickName);
    }

    std::cout<<"Enter Your Darkest Secret"<<std::endl;
    std::getline(std::cin, darkestSecret);
    while (PhoneBook::checker(darkestSecret))
    {
        std::cout<<"ERROR : No Darkest Secret Please Enter DarkestSecret"<<std::endl;
        std::getline(std::cin, darkestSecret);
    }

    std::cout<<"Enter Your PhoneNumber"<<std::endl;
    std::getline(std::cin, phoneNumber);
	while (PhoneBook::checker(phoneNumber))
	{
        std::cout<<"ERROR : In phoneNumber either it's empty or not numeric"<<std::endl;
		std::getline(std::cin, phoneNumber);
	}
	while (PhoneBook::is_digit(phoneNumber))
	{
		std::cout<<"ERROR: Phone Number must be numeric"<<std::endl;
		std::getline(std::cin, phoneNumber);
	}

	if (this->num_contact <= 8)
	{
		this->contact[num_contact].set_firstName(firstName);
		this->contact[num_contact].set_lastName(lastName);
		this->contact[num_contact].set_nickName(nickName);
		this->contact[num_contact].set_darkestSecret(darkestSecret);
		this->contact[num_contact].set_phoneNumber(phoneNumber);
	}
	else
	{
		this->num_contact = 0;
		this->contact[0].set_firstName(firstName);
		this->contact[0].set_lastName(lastName);
		this->contact[0].set_nickName(nickName);
		this->contact[0].set_darkestSecret(darkestSecret);
		this->contact[0].set_phoneNumber(phoneNumber);
	}
	this->num_contact++;
}

void PhoneBook::print_contact()
{
	std::string fname;
	if (this->num_contact == -1)
		std::cout<<"List is Empty"<<std::endl;
	else
	{
		std::cout<<"Number contact : "<<this->num_contact<<std::endl;
		while (this->num_contact > 0)
		{
			std::cout<<"----------------------------------------------------------------------"<<std::endl;
			std::cout<<"First Name = "<< this->contact[num_contact].get_firstName() << std::endl;
			std::cout<<"Last Name = "<< this->contact[num_contact].get_lastName() << std::endl;
			std::cout<<"Nick Name = "<< this->contact[num_contact].get_nickName() << std::endl;
			std::cout<<"Darkest Secret = "<< this->contact[num_contact].get_darkestSecret() << std::endl;
			std::cout<<"Phone Number = "<< this->contact[num_contact].get_phoneNumber() << std::endl;
			std::cout<<"----------------------------------------------------------------------"<<std::endl;
			this->num_contact--;
		}	
	}
}