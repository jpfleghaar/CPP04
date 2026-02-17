/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:06:34 by jenne             #+#    #+#             */
/*   Updated: 2026/02/17 17:46:59 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(const WrongCat& copy);
    WrongAnimal& operator=(const WrongAnimal& copy);
    ~WrongAnimal();

    void makeSound() const;
    std::string getType() const;
};

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& copy);
    WrongCat& operator=(const WrongCat& copy);
    ~WrongCat();

    void makeSound() const;
};


#endif