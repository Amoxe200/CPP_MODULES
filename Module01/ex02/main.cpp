/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:41:28 by amoxe             #+#    #+#             */
/*   Updated: 2022/06/01 16:13:53 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPtr = &str;
    std::string &stringRef = str;

    std::cout<<"The memory address of str is: "<<&str<<std::endl;
    std::cout<<"The memory address held by stringPtr is: "<<stringPtr<<std::endl;
    std::cout<<"The memory address held by stringRef is: "<<&stringRef<<std::endl;
    std::cout<<std::endl;
    std::cout<<"The value of str is: "<<str<<std::endl;
    std::cout<<"The value pointed to by stringPtr: "<<*stringPtr<<std::endl;
    std::cout<<"The value pointed to by stringRef: "<<stringRef<<std::endl;
}