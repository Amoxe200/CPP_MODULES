/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:59:16 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/23 10:24:46 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->num_contact = 0;
	this->check_point = 0;
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
        std::cout<<"ERROR : No FirstName Please Enter First Name"<<std::endl;
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

	if (this->num_contact < 8)
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
	if (this->check_point < 8)
		this->check_point++;
	this->num_contact++;

}

int		PhoneBook::index_checker(int *indexes, int index)
{
	int i;
	int last_val;

	i = 0;
	while (i < this->check_point)
	{
		last_val = *(indexes + i);
		i++;
	}
	if (index > last_val || index < 0)
		return (1);
	return (0);
}

void	PhoneBook::print_contact()
{
	std::string fname, lname, nickName, darkestSecret, phoneNumber;

	int counter;
	int index;
	int	indexes[this->check_point];

	counter = 0;
	if (this->num_contact == 0)
		std::cout<<"List is Empty"<<std::endl;
	else
	{
		std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        std::cout << "|-------------------------------------------|" << std::endl;

		while (counter < this->check_point)
		{
			std::cout<<"|"<<std::setw(10)<<counter<<"|";
			indexes[counter] = counter;
			fname = this->contact[counter].get_firstName();
			if (fname.length() > 10)
				std::cout<<fname.substr(0, 9)<<"."<<"|";
			else
				std::cout<<std::setw(10)<<fname<<"|";
			
			lname = this->contact[counter].get_lastName();
			if (lname.length() > 10)
				std::cout<<lname.substr(0, 9)<<"."<<"|";
			else
				std::cout<<std::setw(10)<<lname<<"|";

			nickName = this->contact[counter].get_nickName();
			if (nickName.length() > 10)
				std::cout<<nickName.substr(0, 9)<<"."<<"|"<<std::endl;
			else
				std::cout<<std::setw(10)<<nickName<<"|"<<std::endl;

			counter++;
		}
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout<<"Enter The Contact Index For more infos"<<std::endl;
		std::cin>>index;

		while (index_checker(indexes, index))
		{
			std::cout<<"Error Index Out of Range"<<std::endl;
			std::cout<<"Re-enter the index"<< std::endl;
			std::cin>>index;
		}
		fname = this->contact[index].get_firstName();
		lname = this->contact[index].get_lastName();
		nickName = this->contact[index].get_nickName();
		darkestSecret = this->contact[index].get_darkestSecret();
		phoneNumber = this->contact[index].get_phoneNumber();

		std::cout<<"First Name : "<< fname << std::endl;
		std::cout<<"Last Name  : "<< lname << std::endl;
		std::cout<<"Nick Name  : "<< nickName << std::endl;
		std::cout<<"Darkest Secret : "<< darkestSecret << std::endl;
		std::cout<<"Phone Number  : "<< phoneNumber << std::endl;	

		std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}