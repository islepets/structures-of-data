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

struct list* add(struct list* lst, int number) {
	struct list* temp, * p;
	temp = (struct list*)malloc(sizeof(struct list));

	p = lst->next;
	lst->next = temp;

	temp->field = number;
	temp->next = p;
	temp->prev = lst;

	if (p != NULL) {
		p->prev = temp;
	}

	return temp;
}

struct list* delete(struct list* lst) {
	struct list* next, * prev;
	next = lst->next;
	prev = lst->prev;

	if (prev != NULL) {
		prev->next = lst->next;
	}
	if (next != NULL) {
		next->prev = lst->prev;
	}
	free(lst);

	return prev;
}

int main() {

	return 0;
}