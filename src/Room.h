#ifndef ROOM_H
#define ROOM_H

#include "Thing.h"
#include "List.h"

typedef struct Room Room;
typedef struct RoomLink;

// Struct that will contain a list of Things, a description, and links to other rooms.
struct Room {
  char* name;
  char* desc;
  ListItem* content;
  ListItem* links;
};

struct RoomLink {
  char* name;
  Room* room;
};

#endif
