/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:22:01 by jenne             #+#    #+#             */
/*   Updated: 2026/02/17 18:14:33 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{  
    _type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    if (this != &copy)
        _type = copy._type;
    std::cout << "WrongCat assigment operator called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Weom Weom Weom" << std::endl;
}