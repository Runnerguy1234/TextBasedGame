#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "Rooms.h"

char* input(); // Get user input
bool yesno();  // [Y/n] input

int main() {
  printf("%s\n", testroom.name);
  printf("%s\n", testroom.desc);
  printf("You see a %s.\n", ((Thing*)(listIndex(testroom.content, 0)))->name);
  printf("%s", ((Thing*)(listIndex(testroom.content, 0)))->use((Thing*)(listIndex(testroom.content, 0))));

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
