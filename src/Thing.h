#ifndef THING_H
#define THING_H

typedef struct Thing Thing;

// Struct that will represent everything from weapons to people to buildings
struct Thing {
  char* name;
  char* (*use)(Thing*);
};

#endif
