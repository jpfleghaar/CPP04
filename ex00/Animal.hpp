/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpflegha <jpflegha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:15:13 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/16 15:41:16 by jpflegha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;
public:
    Animal(std::string type);
    ~Animal();
};


class Dog : public Animal
{
public:
    Dog(std::string type);
    ~Dog();
};

class Cat : public Animal
{

public:
    Cat(std::string type);
    ~Cat();
};


#endif