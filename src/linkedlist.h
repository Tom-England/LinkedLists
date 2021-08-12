struct Node{
	char data[256];
	struct Node* next;
};

// Returns a pointer to a Node struct that has next set to NULL
struct Node* createNode();

// Appends a Node to the end of the linked list with data set to content
// Returns a pointer to head
struct Node* pushNode(struct Node* head, char* content);

// Removes the Node at the end of the linked list and frees its memory
void popNode(struct Node* head);

// Outputs all Nodes data and next pointer
void printList(struct Node* head);

// Searches for string searchTerm in the list
// Returns 1 for found
// Returns 0 for not found
int seach(struct Node* head, char* searchTerm);

// Adds a node to the list at the specified index
// Returns 1 if successful
// Returns 0 if unsuccessful
int addNodeAtIndex(struct Node* head, char* content, int index);
