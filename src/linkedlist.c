#include "linkedlist.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node* createNode(){
	// Returns a pointer to a node with next set to NULL
	struct Node* temp = malloc(sizeof(struct Node));
	temp->next = NULL;
	return temp;
}

struct Node* pushNode(struct Node* head, char* content){
	// Creates two nodes and assigns content to temps data variable
	struct Node* temp;
	struct Node* p;
	temp = createNode();
	strcpy(temp->data, content);
	// Check if head is NULL (Linked List empty)
	if (!head){
		head = temp;
	} else {
		// Loops through the list until the end is found (p->next = NULL on last entry)
		p = head;
		while (p->next) {
			p = p->next;
		}
		p->next = temp;
	}
	return head;
}

void popNode(struct Node* head){
	// Finds the second to last node in the list
	struct Node* p = head;
	while (p->next->next){
		p = p->next;
	}
	// Frees the final node and updates p's next
	free(p->next);
	p->next = NULL;
}

void printList(struct Node* head){
	// Iterates over the list and prints each Node
	struct Node* p = head;
	int status = 1;
	printf("Printing List...\n");
	while (status) {
		printf("%s %p\n", p->data, p->next);
		if (p->next) {
			p = p->next;
		} else {
			status = 0;
		}
	}
}

int search(struct Node* head, char* searchTerm){
	// Iterates through list, checks each node against the search term
	struct Node* p = head;
	while (p->next){
		if (strcmp(p->data, searchTerm) == 0){
			return 1;
		}
		p = p->next;
	}
	return 0;
}
int addNodeAtIndex(struct Node* head, char* content, int index) {
	struct Node* temp = createNode();
	strcpy(temp->data, content);
	struct Node* p = head;
	int counter = 0;
	while (p->next){
		if (counter == index - 1){
			temp->next = p->next;
			p->next = temp;
			return 1;
		}
		counter++;
		p = p->next;
	}
	return 0;
}
