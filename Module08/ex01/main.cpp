/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:24:01 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/05 01:26:18 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {

	Span spa = Span(5);
	spa.addNumber(6);
	spa.addNumber(3);
	spa.addNumber(17);
	spa.addNumber(9);
	spa.addNumber(11);
	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
	
	Span	sp(210);
	
	try
	{
		sp.addNumber(20);
		sp.addNumber(0);
		sp.addNumber(-3);
		sp.addNumber(10);
		sp.addNumber(445);
		sp.addNumber(12);
		sp.addNumber(-29);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		
		std::vector<int> test;
		
		test.resize(200);
		sp.addNumber(test.begin(), test.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	return (0);
}