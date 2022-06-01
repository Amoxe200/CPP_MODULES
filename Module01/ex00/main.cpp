/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:36:01 by amoxe             #+#    #+#             */
/*   Updated: 2022/05/26 16:41:24 by amoxe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


int main()
{

    Zombie zombie("Zombie");
    zombie.annonce();
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"Creating Zombie using newZombie"<<std::endl;
    Zombie* n_Zombie = new_zombie("NewZombie");
    n_Zombie->annonce();
    delete(n_Zombie);
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"Creating Zombie using randomChump"<<std::endl;
    randomChump("zombieChump");

return(0);
}