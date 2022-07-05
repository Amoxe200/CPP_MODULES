/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 00:27:32 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/05 01:16:05 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(){}

Span::Span(unsigned int n)
{
    this->max_size = n;
}

Span::Span(const Span &old_obj)
{
    *this  = old_obj;
}

Span& Span::operator=(const Span &rhs)
{
    this->max_size = rhs.max_size;
    this->vec_int = rhs.vec_int;

    return (*this);
}

void Span::addNumber(int i)
{
    if (vec_int.size() < (size_t)this->max_size)
        vec_int.push_back(i);
    else
        throw(spanException());
    
}

int Span::longestSpan()
{
    int result; 

    if (vec_int.size() > 1)
    {
        std::vector<int>::iterator min_it = std::min_element(vec_int.begin(), vec_int.end());
        std::vector<int>::iterator max_it = std::max_element(vec_int.begin(), vec_int.end());
    
        result = *max_it - *min_it;                
    }
    else
    {
        throw(nospanException());
    }

    return (result);
}

int Span::shortestSpan()
{
    int result;
    if (vec_int.size() > 1)
    {
        std::vector<int> vec_copy = vec_int;
        std::sort(vec_copy.begin(), vec_copy.end());
        std::vector<int> difs;
        for (size_t i = 1; i < vec_copy.size(); i++)
        {
            difs.push_back(vec_copy[i] - vec_copy[i - 1]);
        }
        std::vector<int>::iterator min_dif = std::min_element(difs.begin(), difs.end());      

        result = *min_dif;
    }
    else
        throw(nospanException());

    return (result);
}
