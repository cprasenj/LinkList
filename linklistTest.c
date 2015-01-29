#include "linklist.h"
#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>

typedef Node* node_ptr;

#define log(test_description) int log = printf("\t  ==>%s\n\n", test_description)
#define string char* 
void test_createList_001() {
	log("create list creates a blank list");
	LinkedList list = createList(),tmp = {0,0,0};
	assertEqual(list.head,tmp.head);
	assertEqual(list.count,tmp.count);
	assertEqual(list.tail,tmp.tail);
}

void test_create_node_001() {
	log("create_node creates a node with given integer");
	int c = 9;
	Node *intNode = create_node(&c);
	assertEqual(*(int *)((*intNode).data),9);
	assertEqual((*intNode).next,0);
}

void test_create_node_002() {
	log("create_node creates a node with given character");
	char c = 'A';
	Node *intNode = create_node(&c);
	assertEqual(*(char *)((*intNode).data),'A');
	assertEqual((*intNode).next,0);
}

void test_create_node_003() {
	log("create_node creates a node with given string");
	string c = "Prasenjit";
	Node *intNode = create_node(&c);
	assertEqual(*(string *)((*intNode).data),"Prasenjit");
	assertEqual((*intNode).next,0);
}

void test_create_node_004() {
	log("create_node creates a node with given float");
	float c = 19.2;
	Node *intNode = create_node(&c);
	assertEqual(*(float *)((*intNode).data),19.2);
	assertEqual((*intNode).next,0);
}

void test_create_node_005() {
	log("create_node creates a node with given double");
	double c = 19.2;
	Node *intNode = create_node(&c);
	assertEqual(*(double *)((*intNode).data),19.2);
	assertEqual((*intNode).next,0);
}

void test_create_node_006() {
	log("create_node creates a node with given longint");
	long int c = 2147483647;
	Node *intNode = create_node(&c);
	assertEqual(*(long int *)((*intNode).data),2147483647);
	assertEqual((*intNode).next,0);
}

void test_create_node_007() {
	log("create_node creates a node with given signed char");
	signed char c = 127;
	Node *intNode = create_node(&c);
	assertEqual(*(signed char *)((*intNode).data),127);
	assertEqual((*intNode).next,0);
}

void test_create_node_008() {
	log("create_node creates a node with given unsigned char");
	unsigned char c = 255;
	Node *intNode = create_node(&c);
	assertEqual(*(unsigned char *)((*intNode).data),255);
	assertEqual((*intNode).next,0);
}

void test_add_to_list_001() {
	log("adds an integer data element to the empty linklist");
	int c = 9;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	assertEqual(*(int *)(*(list.head)).data,9);
}

void test_add_to_list_002() {
	log("adds an integer data element to the existing linklist");
	int c = 9,d = 10;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*(int *)(*(list.head)).data,9);
	assertEqual(*(int *)(*(list.tail)).data,10);
}

void test_add_to_list_003() {
	log("adds an integer data element to the empty character linklist");
	char c = 'A';
	LinkedList list = createList();
	Node *charNode = create_node(&c);
	add_to_list(&list,charNode);
	assertEqual(*(char *)(*(list.head)).data,'A');
}

void test_add_to_list_004() {
	log("adds a character data element to the existing character linklist");
	char c = 'A',d = 'B';
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*(char *)(*(list.head)).data,'A');
	assertEqual(*(char *)(*(list.tail)).data,'B');
}

void test_add_to_list_005() {
	log("adds a string data element to the empty linklist for strings");
	string c = "Prasenjit";
	LinkedList list = createList();
	Node *charNode = create_node(&c);
	add_to_list(&list,charNode);
	assertEqual(*(string *)(*(list.head)).data,"Prasenjit");
	assertEqual(*(string *)(*(list.tail)).data,"Prasenjit");
}

void test_add_to_list_006() {
	log("adds a string data element to the existing linklist for string");
	string c = "Prasenjit",d = "Chakraborty";
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*(string *)(*(list.head)).data,"Prasenjit");
	// assertEqual(*(string *)(*(list.tail)).data,"Chakraborty"); Checkpoint
}

void test_add_to_list_007() {
	log("adds a float data element to the empty linklist for floats");
	float c = 72.3;
	LinkedList list = createList();
	Node *charNode = create_node(&c);
	add_to_list(&list,charNode);
	assertEqual(*(float *)(*(list.head)).data,72.3);
	assertEqual(*(float *)(*(list.tail)).data,72.3);
}

void test_add_to_list_008() {
	log("adds a float data element to the existing float linklist");
	float c = 72.3,d = 65.3;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*(float *)(*(list.head)).data,72.3);
	assertEqual(*(float *)(*(list.tail)).data,65.3);
}

void test_add_to_list_009() {
	log("adds a long int data element to the empty linklist for long ints");
	long int c = 2147483647;
	LinkedList list = createList();
	Node *charNode = create_node(&c);
	add_to_list(&list,charNode);
	assertEqual(*(long int *)(*(list.head)).data,2147483647);
	assertEqual(*(long int *)(*(list.tail)).data,2147483647);
}

void test_add_to_list_010() {
	log("adds a long int data element to the existing long int linklist");
	long int c = 2147483647,d = 2147483646;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*(long int *)(*(list.head)).data,2147483647);
	assertEqual(*(long int *)(*(list.tail)).data,2147483646);
}

void test_add_to_list_0011() {
	log("adds a double data element to the empty linklist for doubles");
	double c = 21.1;
	LinkedList list = createList();
	Node *charNode = create_node(&c);
	add_to_list(&list,charNode);
	assertEqual(*(double *)(*(list.head)).data,21.1);
	assertEqual(*(double *)(*(list.tail)).data,21.1);
}

void test_add_to_list_012() {
	log("adds a double data element to the existing double linklist");
	double c = 21.1,d = 21.2;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*(double *)(*(list.head)).data,21.1);
	assertEqual(*(double *)(*(list.tail)).data,21.2);
}

void test_get_first_element_001() {
	log("gives the first element of the link list");
	int c = 9,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res, 9);
}

void test_get_last_element_001() {
	log("gives the first element of the link list if there is only one element");
	int c = 9,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_last_element(list);
	assertEqual(*res, 9);
}

void add(void* data) {
	*(int*)data += 1;
}

void test_traverse_001() {
	log("traverse through a int node and increases each element by one");
	int c = 9;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	traverse(list,add);
	assertEqual(*(int*)(*(Node*)(list.head)).data, 10);
}







