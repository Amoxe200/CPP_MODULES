/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:42:17 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/05 00:12:57 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &n, int a)
{
    return (std::find(n.begin(), n.end(),a));
}
#endif