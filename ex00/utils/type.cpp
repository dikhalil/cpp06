/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:59:18 by dikhalil          #+#    #+#             */
/*   Updated: 2025/12/03 15:39:58 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../ScalarConverter.hpp"

static bool isInt(const std::string &s)
{
    std::stringstream ss(s);
    int i;

    ss >> i;
    return (!ss.fail() && ss.eof());
}

static bool isChar(const std::string &s)
{
    return (s.length() == 1 && !isdigit(s[0]));
}

bool isFloat(const std::string &s)
{
    float f;
    std::stringstream ss(s.substr(0, s.length() - 1));

    if (s == "nanf" || s == "+inff" || s == "-inff")
        return (true);
    if (s[s.length() - 1] != 'f')  
        return (false);
    ss >> f;
    return (!ss.fail() && ss.eof());
}
static bool isDouble(const std::string &s)
{
    std::stringstream ss(s);
    double d;

    if (s == "nan" || s == "+inf" || s == "-inf")
        return (true);

    ss >> d;
    return (!ss.fail() && ss.eof());
}

static bool isPseudo(const std::string &s)
{
    return (s == "nan"  || s == "nanf"  ||
            s == "+inf" || s == "-inf"  ||
            s == "+inff"|| s == "-inff");
}

t_literalType detectLiteralType(std::string const &literal)
{
    t_literalType types[5] =
    {
        PSEUDO,
        CHAR,
        INT,
        FLOAT,
        DOUBLE
    };
    bool (*detectType[5])(const std::string &) =
    {
        &isPseudo,
        &isChar,
        &isInt,
        &isFloat,
        &isDouble
    };
    if (literal.empty())
        return (INVALID);
    for (int i = 0; i < 5; i++)
    {
        if (detectType[i](literal))
            return (types[i]);
    }
    return (INVALID);
}
