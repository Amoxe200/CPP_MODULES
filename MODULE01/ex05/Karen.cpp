/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 08:01:48 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/27 04:39:22 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void tkhrbi9a(void)
{
    std::cout<<"Chi kharya"<<std::endl;
}

Karen::Karen()
{
    this->names_arr[0] = "DEBUG";
    this->names_arr[1] = "INFO";
    this->names_arr[2] = "WARNING";
    this->names_arr[3] = "ERROR";

    this->fcnPtr[0] = &Karen::debug;
    this->fcnPtr[1] = &Karen::info;
    this->fcnPtr[2] = &Karen::warning;
    this->fcnPtr[3] = &Karen::error;
};

void Karen::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"<<std::endl;
}

void Karen::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"<<std::endl;
}

void Karen::warning(void)
{
	std::cout<< "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month"<<std::endl;
}

void Karen::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now"<<std::endl;
}



void	Karen::complain(std::string level)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (level == this->names_arr[i])
            (this->*(fcnPtr[i]))();
        i++;
    }
}