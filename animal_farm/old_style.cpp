#include <iostream>
#include "Animals.h"

/**
 * Step 1:
 * Old style coding i.e. direct use of raw pointers (new and delete). The array
 * has a fixed size that is included in the for-loop.
 *
 * The implementation is crude, but correct.
*/

int main() {
  Dog *d = new Dog();
  Pig *p = new Pig();
  Animal *farm[2] = {p, d};

  for (int i = 0; i < 2; ++i)
    farm[i]->sound();

  delete d;
  delete p;

  return -1;
}
