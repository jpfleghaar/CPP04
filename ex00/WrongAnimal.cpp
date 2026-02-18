/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:21:43 by jenne             #+#    #+#             */
/*   Updated: 2026/02/18 13:36:11 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Animal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    if(this != &copy)
        _type = copy._type;
     std::cout << "WrongAnimal assigment operator called" << std::endl;
    return (*this);
}
    WrongAnimal::~WrongAnimal()
    {
        std::cout << "WrongAnimal deconstructor called" << std::endl;
    }

    void WrongAnimal::makeSound() const
    {
        std::cout << "Souns like a wrong animal" << std::endl;
    }
    std::string WrongAnimal::getType() const
    {
        return(_type);
    }