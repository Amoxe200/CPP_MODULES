/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typecast.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:48:27 by aaqari            #+#    #+#             */
/*   Updated: 2022/07/04 17:21:22 by aaqari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
    virtual ~Base(){};
};

class A: public Base
{
    public: 
    ~A(){};
};

class B: public Base
{
    public:
    ~B(){};
};

class C: public Base
{
    public:
    ~C(){};
};

Base *generate(void)
{
    srand(time(NULL));
    int r_num = rand() % 3;
    // std::cout<<r_num<<std::endl;
    if (r_num == 1)
        return new A();
    else if (r_num == 0)
        return new B();
    return new C();
}

void    identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout<<"A"<<std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout<<"B"<<std::endl;
    else 
        std::cout<<"C"<<std::endl;
}

void    identify(Base &p)
{
    try
    {
       A &ref = dynamic_cast<A &>(p);
       (void)ref;
       std::cout<< "A" << std::endl;
    }
    catch (const std::exception &e)
    {
        try
        {
            B &ref = dynamic_cast<B &>(p);
            (void)ref;
            std::cout<< "B" << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cout<< "C" << std::endl;
        }
    }
}

int main()
{
    Base *x = generate();

    std::cout<<"Dynamic Cast Using pointers"<<std::endl;
    identify(x);

    std::cout<<"Dynamic Cast Using Reference"<<std::endl;
    identify(x);
}