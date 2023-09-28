#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void example2(const char *in) {
  char *buf = malloc(sizeof(char) * 10);
  strcpy(buf, in);

  printf("This is the copied buffer: %s\n", buf);
}

int main(int argc, char **argv) {
  example2(argv[1]);

  return 0;
}
