/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:28:29 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/21 15:38:44 by amoxe            ###   ########.fr       */
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

void Contact::set_phoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::set_darkestSecret(std::string darkestSecret)
{
    this->darketSecret = darkestSecret;
}


std::string Contact::get_firsName()
{
    return this->firstName;
}

std::string Contact::get_lastName()
{
    return this->lastName;
}

std::string Contact::get_nickName()
{
    return this->nickName;
}

std::string Contact::get_phoneNumber()
{
    return this->phoneNumber;
}

std::string Contact::get_darkestSecret()
{
    return this->darketSecret;
}