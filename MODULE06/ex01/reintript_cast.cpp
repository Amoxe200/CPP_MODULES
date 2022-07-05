/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reintript_cast.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:47:03 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 15:06:58 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)                
{
    return (reinterpret_cast <Data*>(raw));
}


int main()
{
    Data d;

    uintptr_t p;

    d.i = 5;
    
    std::cout << "SERIALIZER" << std::endl;
    std::cout << d.i << std::endl;
    
    p = serialize(&d);

    std::cout << "DESERIALIZER" << std::endl;
    std::cout << "after cast :: " << p << std::endl;
    Data *za;

    za = deserialize(p);
    
    std::cout << za->i << std::endl;

}