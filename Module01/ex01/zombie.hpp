/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:00:41 by amoxe             #+#    #+#             */
/*   Updated: 2022/06/01 15:11:51 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        std::string get_name();
        void set_name(std::string name);
    private:
        std::string name;
};

Zombie *zomebiHorde(int n, std::string name);

#endif