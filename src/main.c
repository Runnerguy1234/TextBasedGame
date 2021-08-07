#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "Thing.h"

char* input();
bool yesno();

int main() {
  Thing testhing = {"Test Thing!", &yesno};

  printf("%s", testhing.name);
  testhing.use(&testhing);

  return 0;
}

char* input() {
  size_t size = 1;
  char* buffer = malloc(32);

  getline(&buffer, &size, stdin);
  buffer[strcspn(buffer, "\n")] = 0;

  return buffer;
}

bool yesno() {
  char* ch = input();
  
  if ((ch[0] == 'n') || (ch[0] == 'N')) {
    free(ch);
    return false;
  }

  free(ch);
  return true;
}
