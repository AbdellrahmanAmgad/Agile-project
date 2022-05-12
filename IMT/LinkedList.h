#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "BankAccount.h"

typedef struct LinkedListEntry {
	Bank_Account data;
}LinkedListEntry;

typedef struct Node {
	LinkedListEntry data;
	struct Node *next;
}Node;

typedef struct LinkedList {
	Node *head;
	int lsize;
}LinkedList;

void createLinkedList(LinkedList *);
int lenghtLinkedList(LinkedList *);
int insertLinkedList(LinkedList *, LinkedListEntry);
int removeLinkedList(LinkedList *, LinkedListEntry);
int removeFromEndLinkedList(LinkedList *, int);
int searchLinkedList(LinkedList *, LinkedListEntry);
void displayLinkedList(LinkedList *);

#endif // LINKEDLIST_H_INCLUDED
