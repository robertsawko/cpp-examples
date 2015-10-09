#include <iostream>
#include "Animals.h"

/**
 * Old style coding i.e. direct use of raw pointers (new and delete). The array
 * has a fixed size that is included in the for-loop.
*/

int main() {
  Dog *d = new Dog();
  Bird *b = new Bird();
  Animal *farm[2] = {b, d};

  for (int i = 0; i < 2; ++i)
    farm[i]->sound();

  delete d;
  delete b;

  return -1;
}
