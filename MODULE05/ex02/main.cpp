/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 07:10:07 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 11:56:03 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat bureau1 = Bureaucrat("khalid", 1);
		Bureaucrat bureau2 = Bureaucrat("khalida", 134);
		
		Form		*form1 = new ShrubberyCreationForm("form");
		Form		*form2 = new RobotomyRequestForm("form2");
		Form		*form3 = new PresidentialPardonForm("form3");
		
		bureau1.signForm(*form1);
		bureau1.signForm(*form2);
		bureau1.signForm(*form3);
		form1->execute(bureau1);
		form2->execute(bureau1);
		form3->execute(bureau1);
		delete form1;
		delete form2;
		delete form3;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
