/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:51:05 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 22:19:52 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"
 


template< typename T >
 void print( T const & x )
 {
 	std::cout << x << std::endl;
 	return; 
 }
    
class Awesome
{
    public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
    private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main() 
{
    int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
        Awesome tab2[5];
        iter(tab, 5, print);
        iter(tab2, 5, print);
    return 0;
}