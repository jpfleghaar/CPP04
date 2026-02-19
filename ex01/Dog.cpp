/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:35:14 by jenne             #+#    #+#             */
/*   Updated: 2026/02/19 18:05:08 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(std::string type) : Animal(type)
{
    brain = new Brain();
    std::cout << "Dog construtor called" << std::endl;
}
Dog::Dog(const Dog& copy) : Animal(copy)
{
    //Otherwise two Dogs would share the same pointer → double free crash
    brain = new Brain(*copy.brain);
    std::cout << "Dog copy construtor called" << std::endl;
}
Dog &Dog::operator=(const Dog& copy)
{
    if (this != &copy)
    {
        _type = copy._type;
        delete brain;
        brain = new Brain(*copy.brain);

    }
    std::cout << "Dog assigment operator called" << std::endl;
    return (*this);
}

Brain* Dog::getBrain() const
{
    return (brain);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog deconstructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof Woof" <<std::endl;
}