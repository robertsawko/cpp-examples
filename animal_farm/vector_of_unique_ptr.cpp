#include <iostream>
#include <vector>
#include <memory>
#include "Animals.h"

/**
 * Step 3:
 *
 * The XXI century way? Note the reference after auto.Otherwise a copy would
 * have been created and unique_ptr precludes that.
 */

int main() {
  std::vector<std::unique_ptr<Animal>> farm;
  farm.push_back(std::make_unique<Dog>());
  farm.push_back(std::make_unique<Pig>());

  for (auto &z : farm)
    z->sound();
}
