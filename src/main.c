#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedlist.c"

int main(){
	struct Node* head = NULL;
	head = pushNode(head, "First");
	int lim = 1000;
	for (int i = 0; i < lim; i++){
		head = pushNode(head, "hi");
	}
	printList(head);
	search(head, "hi");
	for (int i = 0; i < lim; i++){
		popNode(head);
	}
	printList(head);
	search(head, "hi");
	for (int i = 0; i < 10; i++){
		head = pushNode(head, "hello");
	}
	addNodeAtIndex(head, "world", 5);
	printList(head);
	return 0;
}
