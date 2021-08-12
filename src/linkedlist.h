struct Node{
	char data[256];
	struct Node* next;
};

struct Node* createNode();

struct Node* pushNode(struct Node* head, char* content);

void popNode(struct Node* head);

void printList(struct Node* head);
