/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:29:12 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/15 21:45:58 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    std::string literal;
    if (argc != 2)
    {
        std::cout << "Usage: ./convert <literal>\n";
        return (1);
    }
    literal = argv[1];
    ScalarConverter::convert(literal);
    return (0);
}
