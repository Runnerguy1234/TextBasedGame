#ifndef THINGS_H
#define THINGS_H

#include "Thing.h"

// Use functions
char* none(Thing*); //Default / unusable

// Item templates
const static Thing testhing = {"thing", &none};

#endif
