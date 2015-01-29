#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

LinkedList createList() {
	LinkedList *list;
	list = malloc(sizeof(LinkedList));
	list->count = 0;
	list->head = 0;
	list->tail = 0;
	return *list;
}

Node* create_node(void* data){
	Node *n; 
	n = malloc(sizeof(Node));
	n->data = data;
	n->next = 0;
	return n;
}

int add_to_list(LinkedList* list,Node* s) {
	if(s==0)return 0;
	if(list->head==0){
		list->head = s;
		list->tail = s;
	}
	else
		list->tail->next = s;
		list->tail = s;
	list->count++;
}

void *get_first_element(LinkedList list) {
	return list.head->data;	
}

void *get_last_element(LinkedList list) {
	return list.tail->data;	
}

void traverse(LinkedList list, void (*f)(void* data)) {
	Node* traverser;
	for(traverser = list.head;traverser!=NULL;traverser = traverser->next) {
		f(traverser->data);
	}
}