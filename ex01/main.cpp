/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikhalil <dikhalil@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:29:12 by dikhalil          #+#    #+#             */
/*   Updated: 2025/12/03 16:17:19 by dikhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data* person = new Data();
    Data* diana; 
    uintptr_t rawData; 
    
    rawData = Serializer::serialize(person);
    diana = Serializer::deserialize(rawData);
    person->id = 1;
    person->name = "Diana";
    std::cout << "--- Original Data ---\n";
    std::cout << "Address in RAM: " << person << "\n";
    std::cout << "ID: " << person->id << "\n";
    std::cout << "Name: " << person->name << "\n\n";
    std::cout << "--- Serialized Data ---\n";
    std::cout << "Raw number: " << rawData << "\n\n";
    std::cout << "--- Deserialized Data ---\n";
    std::cout << "Address in RAM: " << diana << "\n";
    std::cout << "ID: " << diana->id << "\n";
    std::cout << "Name: " << diana->name << "\n\n";
    if (diana == person)
        std::cout << "SUCCESS: The deserialized pointer points to the same person.\n";
    else
        std::cout << "ERROR: The pointers are different!\n";
    delete (person);
    return (0);
}