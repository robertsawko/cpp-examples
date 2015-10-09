#include <iostream>
#include "Animals.h"

void Animal::sound() { std::cout << "Generic animal sound\n"; }

void Dog::sound() { std::cout << "Woof!\n"; }

void Bird::sound() { std::cout << "Tweet, tweet!\n"; }

// Destructors
Animal::~Animal() { std::cout << "Animal goes.\n"; }
Bird::~Bird() { std::cout << "Bird goes.\n"; }
Dog::~Dog() { std::cout << "Dog goes.\n"; }
