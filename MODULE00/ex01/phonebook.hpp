/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:59:20 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/23 09:39:17 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook{

    private:
    Contact	contact[8];
    int		num_contact;
    int     check_point;

    public:
    PhoneBook();
    void	add_contact();
    void	print_contact();
    int		checker(std::string check);
    int		is_digit(std::string phoneNumber);
    int		index_checker(int *indexes, int index);
};

#endif