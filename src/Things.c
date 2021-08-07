#include "Things.h"

char* none(Thing* thing) {
  return "You're not really sure how to \"use\" one of these.\n";
}

Thing testhing = {"thing", &none};
