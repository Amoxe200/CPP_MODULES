/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 07:10:07 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 13:07:57 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat bureau1 = Bureaucrat("khalid", 1);
		
		
		Intern	intern1 = Intern();
		
		Form* test = intern1.makeForm("PresidentialPardonForm", "hamid");
		
		if (test)
		{
			bureau1.signForm(*test);
			test->execute(bureau1);
		}
		
		delete test;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
