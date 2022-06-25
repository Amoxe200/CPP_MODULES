/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 03:45:28 by aaqari            #+#    #+#             */
/*   Updated: 2022/06/25 11:04:40 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{

    private:
		std::string type;

    public:
		Weapon();
		Weapon(const std::string& name_);
		void setType(const std::string& type_);
		const std::string& getType() const;

};

#endif