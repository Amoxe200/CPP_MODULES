/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:58:59 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/21 09:53:18 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::set_firstName(std::string firstName)
{
    this->firstName = firstName;   
}

void Contact::set_lastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::set_nickName(std::string nickName)
{
    this->nickName = nickName;   
}

void Contact::set_darkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

void Contact::set_phoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;   
}

std::string Contact::get_firstName()
{
    return(this->firstName);
}

std::string Contact::get_lastName()
{
    return (this->lastName);    
}

std::string Contact::get_nickName()
{
    return (this->nickName);    
}

std::string Contact::get_darkestSecret()
{
    return (this->darkestSecret);   
}

std::string Contact::get_phoneNumber()
{
    return (this->phoneNumber);
}