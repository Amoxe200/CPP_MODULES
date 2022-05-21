/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:53:16 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/21 15:59:18 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(){
    this->num_contact = 0;
}

void PhoneBook :: add_contact(){
    std::string firstName, lastName ,nickName, phoneNumber, darkestSecret;

    std::cout<<" > Enter First Name "<<std::endl;
    std::getline(std::cin, firstName);
    if (firstName.empty())
    {
        std::cout<<"First Name required !" << std::endl;
        std::cout<<"Enter First Name"<<std::endl;
        std::getline(std::cin, firstName);
    }
    
    std::cout<<" > Enter Last Name "<<std::endl;
    std::getline(std::cin, lastName);
    if (lastName.empty())
    {
        std::cout<<"LastName required !" << std::endl;
        std::cout<<"Enter LastName"<<std::endl;
        std::getline(std::cin, lastName);
    }

    std::cout<<" > Enter Nick Name "<<std::endl;
    std::getline(std::cin, nickName);
    if (nickName.empty())
    {
        std::cout<<"NickName required !" << std::endl;
        std::cout<<"Enter NickName"<<std::endl;
        std::getline(std::cin, nickName);
    }
    
    std::cout<<" > Enter PhoneNumber "<<std::endl;
    std::getline(std::cin, phoneNumber);
    if (phoneNumber.empty())
    {
        std::cout<<"PhoneNumber required !" << std::endl;
        std::cout<<"Enter PhoneNumber"<<std::endl;
        std::getline(std::cin, phoneNumber);
    }
    
    std::cout<<" > Enter Your Darkest Secret "<<std::endl;
    std::getline(std::cin, darkestSecret);
    if (darkestSecret.empty())
    {
        std::cout<<"darkestSecret required !" << std::endl;
        std::cout<<"Enter Darkest Secret"<<std::endl;
        std::getline(std::cin, darkestSecret);
    }

    if (this->num_contact < 7)
    {
        this->contact[num_contact].set_firstName(firstName);
        this->contact[num_contact].set_lastName(lastName);
        this->contact[num_contact].set_nickName(nickName);
        this->contact[num_contact].set_phoneNumber(phoneNumber);
        this->contact[num_contact].set_darkestSecret(darkestSecret);
    }
    else
    {
        this->num_contact = 0;
        this->contact[0].set_firstName(firstName);
        this->contact[0].set_lastName(lastName);
        this->contact[0].set_nickName(nickName);
        this->contact[0].set_phoneNumber(phoneNumber);
        this->contact[0].set_darkestSecret(darkestSecret);
    }
    this->num_contact++;
}


void PhoneBook::printContact()
{
    int i;
    int index;
    std::string index1;

    std::string firstName, lastName ,nickName, phoneNumber, darkestSecret;
    i = 0;
    if (this->num_contact == 0)
        std::cout<<"Your List Is Empty "<<std::endl;
    else
    {
        std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        std::cout << "|-------------------------------------------|" << std::endl;
        while (i < this->num_contact)
        {
            std::cout << "|" << std::setw(10) << i << "|";
            firstName = this->contact[i].get_firsName();
            if(firstName.length() > 10)
                std::cout<<firstName.substr(0, 9) <<".";
            else
                 std::cout << std::setw(10) << firstName << "|";

            lastName = this->contact[i].get_lastName();
            if(lastName.length() > 10)
                std::cout<<lastName.substr(0, 9) <<".";
            else
                 std::cout << std::setw(10) << lastName << "|";

            nickName = this->contact[i].get_nickName();
            if(nickName.length() > 10)
                std::cout<<nickName.substr(0, 9) <<".";
            else
                 std::cout << std::setw(10) << nickName << "|";
            std::cout << "|___________________________________________|\n" << std::endl;
            std::cout<<std::endl;

            i++;
        }
        std::cout<<" > Search By Index "<<std::endl;
        std::cin>> index;
        
        firstName = this->contact[index].get_firsName();
        lastName = this->contact[index].get_lastName();
        nickName = this->contact[index].get_nickName();
        phoneNumber = this->contact[index].get_phoneNumber();
        darkestSecret = this->contact[index].get_darkestSecret();
            
        std::cout<<"FirstName = "<<firstName<<std::endl;
        std::cout<<"last Name = "<<lastName<<std::endl;
        std::cout<<"NickName = "<<nickName<<std::endl;
        std::cout<<"PhoneNumber = "<<phoneNumber<<std::endl;
        std::cout<<"DarkestSecret = "<<darkestSecret<<std::endl; 
       
    }
}