/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:02:35 by jenne             #+#    #+#             */
/*   Updated: 2026/02/20 16:22:25 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include <vector>

int main()
{

std::vector<AAnimal*> animals; // Vector of Animal pointers
animals.push_back(new Dog()); // Adding a Dog object
animals.push_back(new Cat()); // Adding a Cat object

// AAnimal* b = new AAnimal;
for (AAnimal* animal : animals) {
        animal->makeSound(); // Polymorphic call to speak
    }

    // Clean up memory
    for (AAnimal* animal : animals) {
        delete animal;
    }
return 0;
}

// A pure virtual function is a way to ensure that all related classes must have a specific function, 
// but each can do it in its unique way

// Abstract classes provide a way to define a common interface for derived classes while allowing each class to implement its specific behavior.

// They ensure consistency and enforce contracts that all derived classes must follow.

// However, abstract classes cannot be instantiated directly and may introduce complexity and design overhead.

// Polymorphism and code reuse are significant advantages when using abstract classes.