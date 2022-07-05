/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 01:35:22 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/05 09:17:51 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_HPP
#define MUTANT_HPP
#include <stack>
#include <iostream>


template<typename T>
class MutantStack : public std::stack<T>
{

public:
    MutantStack()
    {
        
    }
    
    ~MutantStack()
    {
        
    }
    MutantStack(const MutantStack& old_obj)
    {
        *this = old_obj;
    }

    MutantStack& operator =(const MutantStack& rhs)
    {
        this->c = rhs.c;

        return (*this);
    }

    typedef std::stack<T>           stack_type;
    typedef typename stack_type::container_type::iterator    iterator;
    typedef typename stack_type::container_type::const_iterator  const_iterator;
    typedef typename stack_type::container_type::reverse_iterator reverse_iterator;
    typedef typename stack_type::container_type::const_reverse_iterator const_reverse_iterator;
    
    
    iterator   begin()
    {
        return(this->c.begin());
    }
    
    const_iterator begin() const {
        return (this->c.begin());
    }

    iterator   end()
    {
        return(this->c.end());
    }
    
    const_iterator end() const {
        return (this->c.end());
    }



    reverse_iterator   rbegin()
    {
        return(this->c.rbegin());
    }
    
    const_reverse_iterator rbegin() const {
        return (this->c.rbegin());
    }

    reverse_iterator   rend()
    {
        return(this->c.rend());
    }
    
    const_reverse_iterator rend() const {
        return (this->c.rend());
    }
};



#endif