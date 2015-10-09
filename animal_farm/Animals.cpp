#include <iostream>
#include "Animals.h"

void Animal::sound() { std::cout << "Generic animal sound\n"; }

void Dog::sound() { std::cout << "Woof!\n"; }

void Pig::sound() { std::cout << "Oink, oink!\n"; }

// Destructors
Animal::~Animal() { std::cout << "Animal goes.\n"; }
Pig::~Pig() { std::cout << "Pig goes.\n"; }
Dog::~Dog() { std::cout << "Dog goes.\n"; }
