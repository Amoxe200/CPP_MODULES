/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:24:05 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/05 01:28:10 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <exception>
#include <iostream>
#include <algorithm>


class Span
{   
    private :
    int max_size;
    std::vector<int> vec_int;


    public :
    Span();
    Span(unsigned int n);
    Span(const Span &old_obj);
    Span& operator=(const Span &rhs);
    void    addNumber(int i);
    int     longestSpan();
    int     shortestSpan();
    template<typename T>
    void addNumber(T start, T end)
    {
        if (std::distance(start, end) <= (long)(this->max_size - vec_int.size()))
        {
            vec_int.insert(vec_int.end(), start, end);
        }
        else
            throw(spanException());
    }

    class spanException : public std::exception
    {
        public :
        const char *what() const throw()
        {
            return ("Max Capacity");
        }
    };
    class nospanException : public std::exception
    {
        public :
        const char *what() const throw()
        {
            return ("No span found");
        }
    };
};


#endif