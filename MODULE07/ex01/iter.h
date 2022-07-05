/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:50:38 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 20:56:12 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void iter(T* array_ptr, size_t lenght, void (*fun)(T const &x))
{
    for (size_t i = 0; i < lenght; i++)
    {
        fun(array_ptr[i]);
    }
}


#endif