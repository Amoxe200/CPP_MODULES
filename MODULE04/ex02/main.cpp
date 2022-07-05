/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:37:05 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 02:45:41 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

   Animal    *animals[10];
    Brain    *brain;
    for (int i = 0; i < 10; i++)
    {
        if (i < 10 / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << animals[i]->getType() << std::endl;
    }
    brain = animals[7]->getbrain();
    brain->set_ideas("dsdsds",0);
    brain->set_ideas("dsdsds",1);
    brain->set_ideas("dsdsds",2);
    brain->set_ideas("dsdsds",3);
    std::cout << "=======================================" << std::endl;
    std::cout << animals[7]->getbrain()->get_idea(3) << std::endl;
    std::cout << "=======================================" << std::endl;
    for (int i = 0; i < 10; i++)
        delete animals[i];
    std::cout << "=======================================" << std::endl;
    Cat bd;
    {
        Cat tmp = bd;
    }
    Dog bd1;
    {
        Dog tmp1 = bd1;
    }
    std::cout << "=======================================" << std::endl;

    return 0;

}