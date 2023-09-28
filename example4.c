#include <cstdlib>
#include <iostream>

int *vector;

void example4(unsigned index, unsigned long value) {

  vector[index] = value;
}

int main(int argc, char *argv[]) {
  vector = (int *)malloc(sizeof(int) * 64);

  unsigned index = std::stoul(argv[1]);
  unsigned value = std::stoul(argv[2]);
  
  example4(index, value);

  return 0;
}
