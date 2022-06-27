/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 06:45:04 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/27 02:19:02 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_CPP
#define KAREN_CPP
#include <iostream>

class Karen{

    private: 
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    std::string names_arr[4];

    public:
    Karen();
    void    complain(std::string level);
    void    (Karen::*fcnPtr[4])();
};


#endif