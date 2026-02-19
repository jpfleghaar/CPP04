/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:55:27 by jenne             #+#    #+#             */
/*   Updated: 2026/02/19 18:09:22 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy)
{
    if (this != &copy)
    {
        for(int i = 0; i < 100; i++)
            ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain assigment operator called" << std::endl;
    return (*this);
}

std::string Brain::getIdeas(int index) const
{
    if(index >= 100 && index < 0)
        return ("");
    return (ideas[index]);
}

void Brain::setIdea(const std::string idea, int i)
{
    if (i >= 0 && i <= 100)
        ideas[i] = idea;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}