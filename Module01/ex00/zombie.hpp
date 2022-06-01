/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:36:05 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/26 16:39:08 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
    std::string name;
    
    public:
    Zombie(std::string name);
    ~Zombie();
    void annonce(void);
    std::string get_name();
};

Zombie* new_zombie(std::string name);
void    randomChump( std::string name );


#endif
