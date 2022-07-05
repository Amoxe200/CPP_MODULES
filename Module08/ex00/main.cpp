/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:42:05 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/05 00:22:42 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(i);
   
    std::vector<int>::iterator iter = easyfind(vec, 1);
    if (iter != vec.end())
        std::cout<<*iter<<std::endl;
    else
        std::cout << "no value found\n";
}