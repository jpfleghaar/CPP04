/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:15:13 by jpflegha          #+#    #+#             */
/*   Updated: 2026/02/25 12:38:18 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
    std::string _type;
    public:
    AAnimal();
    AAnimal(std::string type);
    AAnimal(const AAnimal& copy);
    AAnimal& operator=(const AAnimal& copy);
    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual ~AAnimal();
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





// class Dog : public AAnimal
// {
// private:
//     Brain* brain;
// public:
//     Dog();
//     Dog(std::string type);
//     Dog(const Dog& copy);
//     Brain* getBrain() const;
//     Dog& operator=(const Dog& copy);
//     virtual void makeSound()const override;
//     ~Dog();
// };

// class Cat : public AAnimal
// {
// private:
//     Brain* brain;
// public:
//     Cat();
//     Cat(std::string type);
//     Cat(const Cat& copy);
//     Brain* getBrain() const;
//     Cat& operator=(const Cat& copy);
//     virtual void makeSound() const override;
//     ~Cat();
// };


#endif