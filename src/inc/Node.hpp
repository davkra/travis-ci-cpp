#pragma once

#define BLOCK_SIZE 1
#define DEFAULT_NUMBER_OF_NODES 5

struct Node
{
  int id;

  struct Node *next;
};

struct Node *newNode(int i);
void printList(struct Node *head);
void freeAll(struct Node *head);
