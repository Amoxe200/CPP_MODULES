/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:37:05 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 00:30:47 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete j;
        delete meta;
        delete i;   
    }
    std::cout<<"========================="<<std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        i->makeSound(); //will output the cat sound!
        meta->makeSound();
        delete meta;
        delete i;
    }

}