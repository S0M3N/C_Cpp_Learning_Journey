#include<stdio.h>

// creating the node
struct Node {
	int data;
	struct Node* next;
};

// reading the elements of the list
void printList(struct Node* head)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

// inserting values to the linked list
void push(Node** head_ref, int new_data) 
{
    Node* new_node = new Node();
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
}

// the main function
int main(){
	int x, c, R;
	char ch;

	// creating the header node
	struct Node* head = NULL;

	// taking the input from the user
	input:
	printf("Enter a number: ");
	// checking if the entered value is a integer or not
	if(scanf("%d", &x) == 0){
		printf("Enter a valid integer\n");
		while((ch = getchar()) != '\n' && ch != EOF);
		goto input;
	}

	// finding the factors of the number inputed and storing it in the list
	for(c=1; c<=x; c++){
		R = x%c;
		if(R == 0){
			push(&head, c);
		}
	}

	// printig the value from the linked list
	printList(head);

	return 0;
}