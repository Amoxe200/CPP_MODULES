/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:59:20 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/21 09:23:36 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include "contact.hpp"

class PhoneBook{

    private:
    Contact contact[8];
    int     num_contact;

    public:
    PhoneBook();
    void add_contact();
    void print_contact();
    int checker(std::string check);
    int is_digit(std::string phoneNumber);
};

#endif