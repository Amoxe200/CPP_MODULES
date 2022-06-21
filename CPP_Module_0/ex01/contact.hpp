/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:59:08 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/21 09:53:02 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{

    private:
    std::string	firstName;
    std::string	lastName;
    std::string	nickName;
    std::string	darkestSecret;
    std::string phoneNumber;

    public:
    void	set_firstName(std::string firstName);
    void	set_lastName(std::string lastName);
    void	set_nickName(std::string nickName);
    void	set_darkestSecret(std::string darkestSecret);
    void	set_phoneNumber(std::string phoneNumber);
    
    std::string	get_firstName();
    std::string	get_lastName();
    std::string	get_nickName();
    std::string	get_darkestSecret();
    std::string get_phoneNumber();

};
#endif