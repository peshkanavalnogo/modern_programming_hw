#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};

void push(struct Node** head_ref, int ndata){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = ndata;
	new_node->next = (*head_ref);
	new_node->prev = NULL;
	if ((*head_ref) != NULL){
		(*head_ref)->prev = new_node;
	(*head_ref) = new_node;
	}
}

void append(struct Node** head_ref, int ndata){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	struct Node* last = *head_ref;
	new_node->data = ndata;
	new_node->next = NULL;
	if (*head_ref == NULL){
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}
	while (last->next != NULL){
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return;
	
}

void print_list(struct Node* n){
	struct  Node* last;
	while (n != NULL){
		printf("%d", n->data);
		last = n;
		n = n->next;
	}
	while (last != NULL){
		printf("%d", last->data);
		last = last->prev;
	}
}

int main(){
	struct Node* head = NULL;
	append(&head, 6);
	push(&head, 7);
	push(&head,1);
	append(&head, 4);
	print_list(head);

	return 0;
}