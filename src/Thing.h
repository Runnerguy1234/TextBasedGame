#ifndef THING_H
#define THING_H

typedef struct Thing Thing;

struct Thing {
  char* name;
  void (*use)(Thing*);
};

#endif
