/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:34:06 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/02 02:09:58 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
    private:
    std::string ideas[100];

    public:
    Brain();//default
    ~Brain();//destructor
    Brain(const Brain &old_obj);//copy constructor
    Brain &operator =(Brain const &rhs);//Operator Overload
    void set_ideas(std::string idea, int i);
    std::string get_idea(int i) const;

};

#endif