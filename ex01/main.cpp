/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:02:35 by jenne             #+#    #+#             */
/*   Updated: 2026/02/19 18:18:04 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
// Dog dog;
// Dog copy = dog;
// dog.getBrain()->setIdea("Eat", 0);
// copy.getBrain()->setIdea("Sleep", 0);
// std::cout << dog.getBrain()->getIdeas(0) << std::endl;
// std::cout << copy.getBrain()->getIdeas(0) << std::endl;
// copy = dog;
// std::cout << dog.getBrain()->getIdeas(0) << std::endl;
// std::cout << copy.getBrain()->getIdeas(0) << std::endl;


//Stress Test
// const Animal *animals[20];

// for (int i = 0; i < 20; i++)
// {
//     if(i < 10)
//     {
//         animals[i] = new Dog();
//     }
//     else
//     {
//         animals[i] = new Cat();
//     }
// }



// for (int i = 0; i < 20; i++)
// {
//     delete animals[i];
// }


//Deep Copy Leak Test
Dog a;
Dog b = a;
Dog c;

c = b;

return 0;
}

