#include <iostream>
#include <vector>
#include "Animals.h"


/**
 * Step 2:
 *
 * The problem with this implementation is that destructors are not invoked.
 * Direct memory allocation (new). 
 *
 * All in all it's a more convenient, but incorrect implementation.
 */

int main() {
  std::vector<Animal *> farm;
  farm.push_back(new Dog());
  farm.push_back(new Pig());

  for (auto z : farm)
    z->sound();

  return -1;
}
