/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:27:53 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/15 21:42:00 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cctype>

typedef enum eLiteralType
{
    PSEUDO,
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID
} t_literalType;

class ScalarConverter
{
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter(void);
    public:
        static void convert(const std::string &literal);
};

bool isFloat(const std::string &s);
void printChar(const std::string &s);
void printPseudo(const std::string &s);
void printNum(const std::string &s);
void printInvalid(const std::string &s);
t_literalType detectLiteralType(std::string const &literal);
    
#endif