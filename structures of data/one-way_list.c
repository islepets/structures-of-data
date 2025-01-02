#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>

typedef struct list_node {
	struct list_t* next;
	void* data;
}list_node_t;

typedef struct list {
	int size;	
	list_node_t* head;
	list_node_t* tail;
}list_t;

list_t* create_list() {
	list_t* lst = malloc(sizeof(list_t));

	lst->size = 0;
	lst->head = NULL;
	lst->tail = lst->head;

	return lst;
}

void push(list_t* lst, void* data) {

	list_node_t* node = malloc(sizeof(list_node_t));
	node->data = data;

	if (lst->tail != NULL) {
		lst->tail->next = node;
	}
	else {
		lst->head = node;
	}

	lst->tail = node;
	lst->size++;
}

void* pop(list_t* lst) {
	if (lst->size == 0) {
		return NULL;
	}

	list_node_t* node = lst->head;
	void* ret_val = node->data;

	lst->size--;
	lst->head = node->next;

	free(node);

	if (lst->size == 0) {
		lst->head = NULL;
		lst->tail = NULL;
	}
	return ret_val;
}

int main() {


	return 0;
}