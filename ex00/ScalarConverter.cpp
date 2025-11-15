/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:29:26 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/15 21:41:51 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) 
{
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string &literal)
{
    t_literalType type;

    type = detectLiteralType(literal);
    switch (type)
    {
        case PSEUDO:
            printPseudo(literal);
            break;
        case CHAR:
            printChar(literal);
            break;
        case INT:
        case FLOAT:
        case DOUBLE:
            printNum(literal);
            break;
        default:
            printInvalid(literal);
            break;
    }
}