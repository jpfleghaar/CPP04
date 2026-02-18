/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:28:26 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/17 14:22:23 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Deconstructor Called" << std::endl;
}
Animal::Animal(const Animal& copy) : _type(copy._type)
{
    std::cout << "Animal copy construtor called" <<  std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
    if(this != &copy)
        _type = copy._type;
    std::cout << "Animal assigment operator called" << std::endl;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Sounds like an Animal" << std::endl;
}

std::string Animal::getType() const
{
    return(_type);
}