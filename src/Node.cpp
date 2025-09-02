#include <Node.hpp>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Node *newNode(int i)
{
  struct Node *node = (struct Node *)malloc(sizeof(struct Node));

  node->id = i;
  node->next = NULL;

  return node;
}

void printList(struct Node *head)
{
  struct Node *current = head;
  while (current != NULL)
  {

    printf("Node %d\n", current->id);

    current = current->next;
  }
}

void freeAll(struct Node *head)
{
  struct Node *current = head;
  struct Node *prev = NULL;
  while (current != NULL)
  {
    prev = current;
    current = current->next;

    free(prev);
  }
}
