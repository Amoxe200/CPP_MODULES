/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:21:18 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 21:29:31 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAXSIZE 20
int main(int, char**)
{
	Array<int> numbers(MAXSIZE);
    int* clone = new int[MAXSIZE];
    srand(time(NULL));
	for (int i = 0; i < MAXSIZE; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
        clone[i] = value;
    }
    for (int i = 0; i < MAXSIZE; i++)
    {
        std::cout << numbers[i] << ", " << clone[i] << std::endl;
        if (clone[i] != numbers[i])
        {
            
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAXSIZE] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete [] clone;
    return 0;
}