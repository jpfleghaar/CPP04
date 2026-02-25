/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:52:07 by jenne             #+#    #+#             */
/*   Updated: 2026/02/25 12:01:48 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"


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

#endif