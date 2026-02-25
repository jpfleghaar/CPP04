/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenne <jpflegha@student.42heilbronn.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 13:02:35 by jenne             #+#    #+#             */
/*   Updated: 2026/02/25 12:07:06 by jenne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    std::cout << "\n===== CORRECT ANIMALS (WITH VIRTUAL) =====\n" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    cat->makeSound();   // ✅ Cat sound
    dog->makeSound();   // ✅ Dog sound
    meta->makeSound();  // ✅ Animal sound

    std::cout << "\nDeleting Animals..." << std::endl;

    delete meta;
    delete dog;
    delete cat;


    std::cout << "\n===== WRONG ANIMALS (NO VIRTUAL) =====\n" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;

    wrong->makeSound();      // WrongAnimal sound
    wrongCat->makeSound();   // ❌ Still WrongAnimal sound (NOT WrongCat) This is called static binding.

    std::cout << "\nDeleting WrongAnimals..." << std::endl;

    delete wrong;
    delete wrongCat; // ❌ WrongCat destructor NOT run correctly


    std::cout << "\n===== DIRECT OBJECT TEST =====\n" << std::endl;

    WrongCat directWrongCat;
    directWrongCat.makeSound(); // ✅ Calls WrongCat version (no pointer involved)

    Cat directCat;
    directCat.makeSound();      // ✅ Cat sound
    
    //Non-virtual functions only break when using base pointers/references.


    std::cout << "\n===== BASE POINTER TO DERIVED TEST =====\n" << std::endl;

    Animal* polyDog = new Dog();
    WrongAnimal* wrongPolyCat = new WrongCat();

    polyDog->makeSound();        // ✅ Dog (virtual works)
    wrongPolyCat->makeSound();   // ❌ WrongAnimal (no virtual)

    delete polyDog;
    delete wrongPolyCat;


    std::cout << "\n===== REFERENCE TEST =====\n" << std::endl;

    Dog realDog;
    Animal& refDog = realDog;

    refDog.makeSound(); // ✅ Dog sound (virtual works)


    WrongCat realWrongCat;
    WrongAnimal& wrongRef = realWrongCat;

    wrongRef.makeSound(); // ❌ WrongAnimal sound

    // References behave exactly like pointers in polymorphism.

    std::cout << "\n===== END =====\n" << std::endl;

    return 0;
}

