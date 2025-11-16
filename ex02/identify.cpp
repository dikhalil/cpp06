/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 17:25:07 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/16 18:30:42 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base *generate(void)
{
    int r;

    std::srand(time(NULL));
    r = std::rand() % 3;
    switch (r)
    {
        case 0:
            return (new A());
            break;
        case 1:
            return (new B());
            break;
        case 2:
            return (new C());
                break;
        default:
            return (NULL);
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p)) 
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p)) 
        std::cout << "C" << std::endl;
    else
        std::cout << "UNKNOWN" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
        return ;
    }
    catch(...) {}
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
        return ;
    }
    catch(...) {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
        return ;
    }
    catch(...) {}
    std::cout << "Unknown\n";
}
