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

int main() {


	return 0;
}