#include <stdio.h>
#include <stdlib.h>

void print_list();

struct Node{
	int data;
	struct Node* next;
};

void print_list(struct Node* n){
	while (n != NULL){
		printf("%d", n->data);
		n = n->next;
	}
}

void reverse(struct Node** head_ref){
	struct Node* prev = NULL;
	struct Node* next = NULL;
	struct Node* current = *head_ref;

	while (current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

int main(){
	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
	struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));

	node1->data = 1;
	node1->next = node2;
	node2->data = 2;
	node2->next = node3;
	node3->data = 3;
	node3->next = node4;
	node4->data = 4;
	node4->next = NULL;
	print_list(node1);
	reverse(&node1);
	printf("\n");
	print_list(node1);
	return 0;
}