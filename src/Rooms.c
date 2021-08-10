#include "Rooms.h"

ListItem content_testroom = {&testhing, NULL};
ListItem links_testroom = {NULL, NULL};

Room testroom = {
  "Test room",
  "Four white walls surround you, reaching up as far as you can see.",
  &content_testroom, &links_testroom
};
