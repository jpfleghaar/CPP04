/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:30:10 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/17 14:34:40 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat() : Animal("cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    
}
Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& copy)
{
    if (this != &copy)
        _type = copy._type;
    std::cout << "Cat assigment operator called" << std::endl;
    return (*this); 
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}