/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:15:13 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/17 13:57:42 by jenne            ###   ########.fr       */
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
    Animal();
    Animal(std::string type);
    Animal(const Animal& copy);
    Animal& operator=(const Animal& copy);
    std::string getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};


class Dog : public Animal
{
public:
    Dog();
    Dog(std::string type);
    Dog(const Dog& copy);
    Dog& operator=(const Dog& copy);
    virtual void makeSound()const;
    ~Dog();
};

class Cat : public Animal
{

public:
    Cat();
    Cat(std::string type);
    Cat(const Cat& copy);
    Cat& operator=(const Cat& copy);
    virtual void makeSound() const;
    ~Cat();
};


#endif