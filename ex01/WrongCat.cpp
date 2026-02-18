/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:22:01 by jenne             #+#    #+#             */
/*   Updated: 2026/02/18 13:52:16 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongCat::WrongCat() 
{  
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    if (this != &copy)
        _type = copy._type;
    std::cout << "WrongCat assigment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat() 
{
    std::cout << "Weom Weom Weom" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong cat sound" << std::endl;
}