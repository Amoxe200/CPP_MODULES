/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 00:28:25 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/25 02:39:58 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{

    private:
        std::string name;

    public:
	Zombie();
	~Zombie();

	std::string	get_name(void);
    void		announce(void);
    void		set_name(std::string zombie_name);
};
Zombie* zombieHorde(int n, std::string name);

#endif