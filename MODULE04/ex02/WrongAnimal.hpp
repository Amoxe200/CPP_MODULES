/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:05:25 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 00:21:13 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
        
    protected:
    std::string type;
    
    public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &old_obj);
    WrongAnimal &operator =(WrongAnimal const &rhs);
    void makeSound() const;

};

#endif