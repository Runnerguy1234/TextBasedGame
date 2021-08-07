#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

typedef struct ListItem ListItem;

void listAppend(ListItem* head, void* data);
void* listIndex(ListItem* head, int index);

struct ListItem {
  void* data;
  ListItem* next;
};

#endif
