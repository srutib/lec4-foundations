#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) { 
  char buffer[100];
  strncpy(buffer, argv[1], 100); 
  
  printf(buffer);
  
  return 0; 
}
