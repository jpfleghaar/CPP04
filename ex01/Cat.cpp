/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:30:10 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/25 12:35:31 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
    
}
//Brain getBrain(); // VERY WRONG (breaks deep copy test)
//Brain* getBrain(); // weaker
//Brain& getBrain(); // not needed here
Brain* Cat::getBrain() const
{
    return (brain);
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
    brain = new Brain(*copy.brain);
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
    delete brain;
    std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}