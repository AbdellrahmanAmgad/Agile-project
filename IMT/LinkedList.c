#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "BankAccount.h"
#include "STD_Types.h"

void createLinkedList(LinkedList *lls) {

	lls->head = NULL;
	lls->lsize = 0;

}
int lenghtLinkedList(LinkedList *lls) {
	Node *tmp = lls->head;
	int tsize = 0;


	if (lls->head == NULL)
		return 0;

	while (tmp != NULL) {
		tsize++;
		tmp = tmp->next;
	}
	return tsize;
}

int insertLinkedList(LinkedList *lls, LinkedListEntry data) {
	Node *newNode, *tmp;

	tmp = lls->head;

	if (newNode = (Node *)malloc(sizeof(Node))) {
		newNode->data = data;
		newNode->next = NULL;
		if (lls->head == NULL) {
			newNode->next = lls->head;
			lls->head = newNode;
			lls->lsize++;
			return 1;
		}
		while (tmp->next != NULL) {
			tmp = tmp->next;

		}
		newNode->next = tmp->next;
		tmp->next = newNode;
		lls->lsize++;
		return 1;
	}


	return 0;
}

int removeLinkedList(LinkedList *lls, LinkedListEntry data) {
	Node *delNode, *current, *previous;

	current = NULL;
	previous = NULL;
	delNode = NULL;

	if (lls->head == NULL)
		return 0;

	current = lls->head->next;
	previous = lls->head;

	if (lls->head->data.data.Bank_Account_ID == data.data.Bank_Account_ID)
	{
		delNode = lls->head;
		lls->head = lls->head->next;
		free(delNode);
		lls->lsize--;
		return 1;
	}
	while (current != NULL)
	{
		if (current->data.data.Bank_Account_ID == data.data.Bank_Account_ID)
		{
			delNode = current;
			previous->next = current->next;
			lls->lsize--;
			free(delNode);
			return 1;
		}
		previous = current;
		current = current->next;
	}
	return 0;



}

int removeFromEndLinkedList(LinkedList *lls, int num) {
	Node *delNode, *current, *previous;

	current = lls->head;
	previous = lls->head;
	delNode = NULL;

	int	i = 1, count = (lls->lsize - num + 1);

	if (count == 1) {
		lls->head = current->next;
		delNode = current;
		lls->lsize--;
		free(delNode);
		return 1;
	}

	while (i < count && current != NULL) {
		previous = current;
		current = current->next;
		i++;
	}

	previous->next = current->next;
	delNode = current;
	lls->lsize--;
	free(delNode);
	return 1;
}

int searchLinkedList(LinkedList *lls, LinkedListEntry data) {
	Node  *current, *previous;

	current = NULL;
	previous = NULL;

	if (lls->head == NULL)
		return -1;

	current = lls->head->next;
	previous = lls->head;

	if (lls->head->data.data.Bank_Account_ID == data.data.Bank_Account_ID)
		return 1;
	int i = 2;
	while (current != NULL)
	{
		if (current->data.data.Bank_Account_ID == data.data.Bank_Account_ID)
		{
			return i;
		}
		previous = current;
		current = current->next;
		i++;
	}
	return i;

}

void displayLinkedList(LinkedList *lls) {

	Node *tmp = lls->head;
	int i = 1;

	while (tmp != NULL) {
		printf("Element number %d = %d\n", i, tmp->data);
		tmp = tmp->next;
		i++;
	}


}

