#include <iostream>
#include <vector>
#include "Animals.h"


/**
 * The problem with this implementation is that destructors are not invoked.
 */

int main() {
  std::vector<Animal *> farm;
  farm.push_back(new Dog());
  farm.push_back(new Bird());

  for (auto z : farm)
    z->sound();

  return -1;
}
