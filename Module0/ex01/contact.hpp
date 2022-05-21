/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:58:41 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/21 15:33:39 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
	private :
    std::string	firstName;
	std::string lastName;
    std::string	nickName;
    std::string	phoneNumber;
    std::string darketSecret;

    public :
    
    
	void set_firstName(std::string firstname);
	void set_lastName(std::string lastName);
	void set_nickName(std::string nickName);
	void set_phoneNumber(std::string phoneNumber);
	void set_darkestSecret(std::string darkestSecret);

	std::string get_firsName();
	std::string get_lastName();
	std::string get_nickName();
	std::string get_phoneNumber();
	std::string get_darkestSecret();
};

#endif