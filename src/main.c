#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedlist.c"

void sysmsg(char* msg){
	printf("====================\n");
	printf("%s\n",msg);
	printf("====================\n");
}

int main(){
	struct Node* head = NULL;
	head = pushNode(head, "First");
	
	sysmsg("Push & Search Test");

	int lim = 1000;
	for (int i = 0; i < lim; i++){
		head = pushNode(head, "hi");
	}
	printList(head);
	if (search(head, "hi")) { printf("Found hi\n"); } else { printf("Didn't find hi\n");}
	
	sysmsg("Pop & Search Test");

	for (int i = 0; i < lim; i++){
		popNode(head);
	}
	printList(head);
	if (search(head, "hi")) { printf("Found hi\n"); } else{ printf("Didn't find hi\n"); }

	sysmsg("Insert at index test");

	for (int i = 0; i < 10; i++){
		head = pushNode(head, "hello");
	}
	addNodeAtIndex(head, "world", 0);
	printList(head);
	
	sysmsg("Length Test");

	printf("Length of LL: %d\n", getLength(head));
	
	sysmsg("Delete at index test");

	deleteNodeAtIndex(head, 1);
	printList(head);

	return 0;
}
