#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>


struct list {
	int field;
	struct list* next;
	struct list* prev;
};

struct list* init(int a) {
	struct list* lst = (struct list*)malloc(sizeof(struct list));

	lst->field = a;
	lst->next = NULL;
	lst->prev = NULL;

	return lst;
}

int main() {

	return 0;
}