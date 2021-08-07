#include "List.h"

void listAppend(ListItem* head, void* data) {
  ListItem current = *head;
  while (current.next != NULL)
    current = *current.next;

  current.next = malloc(sizeof(ListItem));
  
  current.next->data = data;
  current.next->next = NULL;
}

void* listIndex(ListItem* head, int index) {
  ListItem current = *head;
  for (int i = 0; (i < index) && (current.data != NULL); i++)
    current = *current.next;

  return current.data;
}
