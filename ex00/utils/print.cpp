/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:00:51 by dikhalil          #+#    #+#             */
/*   Updated: 2025/11/15 21:42:14 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../ScalarConverter.hpp"

void printPseudo(const std::string &s)
{
    std::cout << "char: impossible"
              << "\nint: impossible";
    if (isFloat(s))
    {
        std::cout << "\nfloat: " << s
                  << "\ndouble: " << s.substr(0, s.length() - 1);
    }
    else
    {
        std::cout << "\nfloat: " << s << "f"
                  << "\ndouble: " << s;
    }
    std::cout << std::endl;
}

void printChar(const std::string &s)
{
    char c;
    
    c = s[0];
    if (!std::isprint(c))
        std::cout << "char: Non displayable";
    else
        std::cout << "char: '" << c << "'";
    std::cout << "\nint: " << static_cast<int>(c) << "\n";
    std::cout << "float: " << std::fixed << std::setprecision(1) 
              << static_cast<float>(c) << "f\n";
    std::cout << "double: " << std::fixed 
              << std::setprecision(1) << static_cast<double>(c) << "\n";
}

void printNum(const std::string &s)
{
    double d;

    d = atof(s.c_str());
    if (d < 0 || d > 127)
        std::cout << "char: impossible";
    else if (!std::isprint(static_cast<char>(d)))
        std::cout << "char: Non displayable";
    else
        std::cout << "char: '" << static_cast<char>(d) << "'";
    if (d >= static_cast<double>(std::numeric_limits<int>::min()) &&
      d <= static_cast<double>(std::numeric_limits<int>::max()))
           std::cout << "\nint: " << static_cast<int>(d) << "\n";
    else
        std::cout << "\nint: impossible\n";
    if (d >= -std::numeric_limits<float>::max() && d <= std::numeric_limits<float>::max())
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f\n";
    else
        std::cout << "float: impossible\n";
    std::cout << "double: " << std::fixed << std::setprecision(1) <<d;
    std::cout << std::endl;
}

void printInvalid(const std::string &s)
{
    (void)s;
    std::cout << "char: impossible"
              << "\nint: impossible"
              << "\nfloat: impossible"
              << "\ndouble: impossible"
              << std::endl;
}

