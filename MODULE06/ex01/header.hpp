/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:42:21 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 14:59:03 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>


typedef struct Data{
    int i;
}Data;

uintptr_t serialize(Data* ptr);


#endif