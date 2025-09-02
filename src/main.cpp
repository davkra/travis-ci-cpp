#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <Node.hpp>

int main(int argc, char *argv[])
{
  size_t number_of_nodes = 0;

  if (argc == 2)
  {
    number_of_nodes = atoi(argv[1]);
  }
  else
  {
    number_of_nodes = DEFAULT_NUMBER_OF_NODES;
  }

  struct Node *head = newNode(1);

  struct Node *current = head;
  for (size_t ctr = 2; ctr <= number_of_nodes; ctr++)
  {
    current->next = newNode(ctr);
    current = current->next;
  }

  printList(head);

  freeAll(head);
  return 0;
}
