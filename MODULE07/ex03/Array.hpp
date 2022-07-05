/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:00:33 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 21:27:39 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template<typename T>
class Array
{
    private: 
    T* mem;
    size_t _size;
    

    public:
    Array()
    {
        this->mem = new T[0];
        this->_size = 0;
    }

    Array(unsigned int n)
    {
        this->mem = new T[n];
        this->_size = n;
    }

    Array(const Array& old_obj)
    {
        this->_size = old_obj._size;
        this->mem = new T[this->_size];
        for (int i = 0; i < this->_size; i++)
        {
            this->mem[i] = old_obj->mem[i];
        }
    }
    
    Array & operator =(const Array &rhs)
    {
        delete[] this->mem;
        this->_size = rhs._size;
        this->mem = new T[this->_size];
        for (int i = 0; i < this->_size; i++)
        {
            this->mem[i] = rhs->mem[i];
        }
    }
    
    T & operator[](int index)
    {
        if ( (size_t)index >= _size)
            throw(std::exception());
        else
            return this->mem[index];
    }

    size_t size()
    {
        return (this->_size);
    }
    
};



#endif