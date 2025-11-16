/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:17:26 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/16 18:38:56 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main(void)
{
    Base *base;
    Base *child;

    base = new Base();
    child = generate();
    identify(base);
    identify(*base);
    identify(child);
    identify(*child);

    delete (child);
    delete(base);
    return (0);
}