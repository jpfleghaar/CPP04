/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 12:31:58 by jenne             #+#    #+#             */
/*   Updated: 2026/02/25 12:34:38 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
private:
    Brain* brain;
public:
    Cat();
    Cat(std::string type);
    Cat(const Cat& copy);
    Brain* getBrain() const;
    Cat& operator=(const Cat& copy);
    virtual void makeSound() const;
    ~Cat();
};

#endif