# C++ Module 04 — Subtype polymorphism, abstract classes, deep copies

Animals that make their own sounds through base-class pointers, with deep-copied `Brain`s and an abstract base class.

*This project was created as part of the 42 curriculum by jpflegha.*

## Exercises

| Exercise | What it shows |
|:---|:---|
| `ex00` | `Animal` with a **virtual** `makeSound()`, and `Dog` / `Cat` overriding it. `WrongAnimal` / `WrongCat` do the same *without* `virtual`, so calling through a base pointer runs the base version. |
| `ex01` | Every `Dog` and `Cat` owns a heap-allocated `Brain` (100 ideas). Copy constructor and assignment make a **deep copy**, and the virtual destructor frees the brain through an `Animal*`. |
| `ex02` | The base class becomes the abstract `AAnimal` (pure virtual `makeSound()`), so it can't be created directly. `main` stores dogs and cats in a `std::vector<AAnimal*>`. |

## Key concepts

- Virtual functions and dynamic dispatch
- Virtual destructors and why they matter for deleting through a base pointer
- Deep vs. shallow copy, rule of three with owned resources
- Abstract classes and pure virtual functions

## Build and run

```bash
git clone https://github.com/jpfleghaar/CPP04.git
cd CPP04/ex02 && make && ./Polymorphism
AAnimal constructor called
Brain default constructor called
Dog default constructor called
AAnimal constructor called
Brain default constructor called
Cat default constructor called
Woof Woof Woof
meow meow meow
...
```

The program is called `Polymorphism` in every exercise. Each exercise has its own Makefile (`c++ -Wall -Wextra -Werror -std=c++17`).

## Project structure

```
ex00/  Animal, Dog, Cat, WrongAnimal, WrongCat (.hpp/.cpp), main.cpp
ex01/  + Brain.{hpp,cpp}
ex02/  AAnimal (abstract, in Animal.hpp) instead of Animal, + Brain, main.cpp
```

## What I learned

- `virtual` decides at runtime which function runs; without it the static type wins (the "Wrong" classes show the bug).
- A class that owns heap memory needs a deep copy, otherwise two objects free the same `Brain`.
- Making the base class abstract prevents objects that make no sense on their own.
