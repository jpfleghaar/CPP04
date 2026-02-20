/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:28:26 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/17 14:22:23 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Default")
{
    std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Deconstructor Called" << std::endl;
}
AAnimal::AAnimal(const AAnimal& copy) : _type(copy._type)
{
    std::cout << "AAnimal copy construtor called" <<  std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
    if(this != &copy)
        _type = copy._type;
    std::cout << "AAnimal assigment operator called" << std::endl;
    return (*this);
}

void AAnimal::makeSound() const
{
}

std::string AAnimal::getType() const
{
    return(_type);
}