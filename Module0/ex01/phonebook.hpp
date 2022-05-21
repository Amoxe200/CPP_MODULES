/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:57:17 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/18 18:26:48 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
#include <iostream>


class   PhoneBook
{
	private :
	Contact contact[8];
    int     num_contact;

    public:
    PhoneBook();
    void    add_contact();
    void    printContact();
};


#endif