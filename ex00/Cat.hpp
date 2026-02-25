/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:50:17 by jenne             #+#    #+#             */
/*   Updated: 2026/02/25 12:05:17 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

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