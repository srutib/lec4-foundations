#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void example1() {
  char name[256];
  printf("Enter your name: \n");
  if (scanf("%s", name) != 1) {
    fprintf(stderr, "Error.");
  }
}

int main(void) {
  example1();
  return 0;
}
