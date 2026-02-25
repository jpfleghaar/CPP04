/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:15:13 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/25 12:33:49 by jenne            ###   ########.fr       */
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

// class Brain
// {
// private:
//     std::string ideas[100];
// public:
//     Brain();
//     Brain(const Brain& copy);
//     Brain& operator=(const Brain& copy);
//     ~Brain();

//     std::string getIdeas(int index) const; 
//     void setIdea(std::string idea, int index);
// };





// class Dog : public Animal
// {
// private:
//     Brain* brain;
// public:
//     Dog();
//     Dog(std::string type);
//     Dog(const Dog& copy);
//     Brain* getBrain() const;
//     Dog& operator=(const Dog& copy);
//     virtual void makeSound()const;
//     ~Dog();
// };

// class Cat : public Animal
// {
// private:
//     Brain* brain;
// public:
//     Cat();
//     Cat(std::string type);
//     Cat(const Cat& copy);
//     Brain* getBrain() const;
//     Cat& operator=(const Cat& copy);
//     virtual void makeSound() const;
//     ~Cat();
// };


#endif