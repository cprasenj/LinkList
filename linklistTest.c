#include "linklist.h"
#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>

typedef Node* node_ptr;

#define log(test_description) int log = printf("**  Description->%s\n\n", test_description)
typedef char* string;  

void test_createList_001() {
	log("create list creates a blank list");
	LinkedList list = createList(),tmp = {0,0,0};
	assertEqual(list.head,tmp.head);
	assertEqual(list.count,tmp.count);
	assertEqual(list.tail,tmp.tail);
	free(list.head);
	free(list.tail);
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
	assertEqual(*(string *)(*(list.tail)).data,"Chakraborty"); 
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
	assert(list.count==1);
	add_to_list(&list,node2);
	assert(list.count==2);
	assertEqual(*(double *)(*(list.head)).data,21.1);
	assertEqual(*(double *)(*(list.tail)).data,21.2);
}

void test_get_first_element_001() {
	log("gives the first element of the link list for integer");
	int c = 9,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res, 9);
}

void test_get_first_element_002() {
	log("gives the first element of the link list for float");
	float c = 9.2,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res, 9.2);
}

void test_get_first_element_003() {
	log("gives the first element of the link list for char");
	char c = 'A',*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res, 'A');
}

void test_get_first_element_004() {
	log("gives the first element of the link list for string");
	string c = "Prasenjit",*res;
	LinkedList list = createList();
	Node *intNode = create_node(c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(res, "Prasenjit");
}

void test_get_first_element_005() {
	log("gives the first element of the link list for double");
	double c = 19.2,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res,19.2);
}

void test_get_first_element_006() {
	log("gives the first element of the link list for long int");
	long int c = 2147483647,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res,2147483647);
}

void test_get_first_element_007() {
	log("gives the first element of the link list for signed char");
	signed char c = 127,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res,127);
}

void test_get_first_element_008() {
	log("gives the first element of the link list for unsigned char");
	unsigned char c = 255,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res,255);
}

void test_get_first_element_009() {
	log("gives the first element of the link list for unsigned int");
	unsigned int c =  4294967295,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res, 4294967295);
}

void test_get_first_element_010() {
	log("gives the first element of the link list for short int");
	short int c =  32767,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_first_element(list);
	assertEqual(*res, 32767);
}

void test_get_last_element_001() {
	log("gives the last element of the link list if there is only one element for int linklist");
	int c = 9,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_last_element(list);
	assertEqual(*res, 9);
}

void test_get_last_element_002() {
	log("gives the first element of the link list if there is only one element for float linklist");
	float c = 9.5,*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_last_element(list);
	assertEqual(*res, 9.5);
}

void test_get_last_element_003() {
	log("gives the first element of the link list if there is only one element for char linklist");
	char c = 'A',*res;
	LinkedList list = createList();
	Node *intNode = create_node(&c);
	add_to_list(&list,intNode);
	res = get_last_element(list);
	assertEqual(*res, 'A');
}

void test_get_last_element_004() {
	log("gives the first element of the link list if there is only one element for string linklist");
	string c = "Prasenjit",*res;
	LinkedList list = createList();
	Node *intNode = create_node(c);
	add_to_list(&list,intNode);
	res = get_last_element(list);
	assertEqual(res, "Prasenjit");
}

void test_get_last_element_005() {
	log("get last element gets the last element of string link list more than size one");
	string c = "Prasenjit",d = "Chakraborty",*res;
	LinkedList list = createList();
	Node *node1 = create_node(c),*node2 = create_node(d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	res = get_last_element(list);
	assertEqual(res, "Chakraborty");	
}

void test_get_last_element_006() {
	log("get last element gets the last element of string link list more than size one");
	char c = 'A',d = 'D',*res;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	res = get_last_element(list);
	assertEqual(*res, 'D');
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

void test_getElementAt_001() {
	log("getElementAt gives the data at given position for integer");
	int c = 9,d = 10;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*((int*)getElementAt(list,0)),9);
	assertEqual(*((int*)getElementAt(list,1)),10);
}

void test_getElementAt_002() {
	log("getElementAt gives the data at given position for character");
	char c = 'A',d = 'B';
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*((char*)getElementAt(list,0)),'A');
	assertEqual(*((char*)getElementAt(list,1)),'B');
}

void test_getElementAt_003() {
	log("getElementAt gives the data at given position for staring");
	string c = "Prasenjit",d = "Chakraborty";
	LinkedList list = createList();
	Node *node1 = create_node(c),*node2 = create_node(d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(getElementAt(list,0),"Prasenjit");
	assertEqual(getElementAt(list,1),"Chakraborty"); //has to be tested
}

void test_getElementAt_004() {
	log("getElementAt gives the data at given position for float");
	float c = 9.1,d = 10.1;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*((float*)getElementAt(list,0)),9.1);
	assertEqual(*((float*)getElementAt(list,1)),10.1);
}

void test_getElementAt_005() {
	log("getElementAt gives the data at given position for double");
	double c = 9.1,d = 10.1;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*((double*)getElementAt(list,0)),9.1);
	assertEqual(*((double*)getElementAt(list,1)),10.1);
}

void test_getElementAt_006() {
	log("getElementAt gives the data at given position for longint");
	long int c = 2147483647,d = 2147483646;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*((long int*)getElementAt(list,0)),2147483647);
	assertEqual(*((long int*)getElementAt(list,1)),2147483646);
}

void test_getElementAt_007() {
	log("getElementAt gives the data at given position for signed char");
	signed char c = -128,d = 127;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(*((signed char*)getElementAt(list,0)),-128);
	assertEqual(*((signed char*)getElementAt(list,1)),127);
}

void test_indexOf_001() {
	log("indexOf gives the position of the given element in an integer link list");
	int c = 9,d = 10;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_002() {
	log("indexOf gives the position of the given element in an character link list");
	char c = 'A',d = 'B';
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_003() {
	log("indexOf gives the position of the given element in an string link list");
	string c = "Prasenjit",d = "Chakraborty";
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_004() {
	log("indexOf gives the position of the given element in an float link list");
	float c = 12.4,d = 13.6;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_005() {
	log("indexOf gives the position of the given element in an double link list");
	double c = 12.4,d = 13.6;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_006() {
	log("indexOf gives the position of the given element in an long int link list");
	long int c = 2147483647,d = 2147483643;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_007() {
	log("indexOf gives the position of the given element in an signed char link list");
	signed char c = -128,d = 127;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_008() {
	log("indexOf gives the position of the given element in an unsigned char link list");
	unsigned char c = 128,d = 255;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_009() {
	log("indexOf gives the position of the given element in an unsigned int link list");
	unsigned int c = 4294967295,d = 4294967292;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_010() {
	log("indexOf gives the position of the given element in an short int link list");
	short int c = -32768,d = 32767;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_indexOf_011() {
	log("indexOf gives the position of the given element in an unsigned short int link list");
	unsigned short int c = 45,d = 65535;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	assertEqual(indexOf(list,&c),0);
	assertEqual(indexOf(list,&d),1);
}

void test_deleteElementAt_001() {
	log("deleteElementAt deletes the element at the given position of integer linklist");
	int c = 9,d = 10,e = 11;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	assertEqual(indexOf(list,&e),2);
	deleteElementAt(list,1);
	assertEqual(indexOf(list,&e),1);
	assertEqual(indexOf(list,&d),-1);
}

void test_deleteElementAt_002() {
	log("deleteElementAt deletes the element at the given position of character linklist");
	char c = 'A',d = 'B',e = 'C';
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	assertEqual(indexOf(list,&e),2);
	deleteElementAt(list,1);
	assertEqual(indexOf(list,&e),1);
	assertEqual(indexOf(list,&d),-1);
}

void test_deleteElementAt_003() {
	log("deleteElementAt deletes the element at the given position of string linklist");
	string c = "Prasenjit",d = "enemy",e = "Chakraborty";
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	assertEqual(indexOf(list,&e),2);
	deleteElementAt(list,1);
	assertEqual(indexOf(list,&e),1);
	assertEqual(indexOf(list,&d),-1);
}

void test_deleteElementAt_004() {
	log("deleteElementAt deletes the element at the given position of float linklist");
	float c = 19.2,d = 20.2,e = 21.2;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	assertEqual(indexOf(list,&e),2);
	deleteElementAt(list,1);
	assertEqual(indexOf(list,&e),1);
	assertEqual(indexOf(list,&d),-1);
}

void test_deleteElementAt_005() {
	log("deleteElementAt deletes the element at the given position of signed char linklist");
	signed char c = -128,d = 127,e = 126;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	assertEqual(indexOf(list,&e),2);
	deleteElementAt(list,1);
	assertEqual(indexOf(list,&e),1);
	assertEqual(indexOf(list,&d),-1);
}

void test_deleteElementAt_006() {
	log("deleteElementAt deletes the element at the given position of long int linklist");
	long int c = 2147483645,d = 2147483646,e = 2147483647;
	LinkedList list = createList();
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	assertEqual(indexOf(list,&e),2);
	deleteElementAt(list,1);
	assertEqual(indexOf(list,&e),1);
	assertEqual(indexOf(list,&d),-1);
}

void test_asArray_001() {
	log("creates an array with a integer linklist");
	int c = 9,d = 10,e = 11,count;
	int** arr;
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	LinkedList list = createList();
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	arr = malloc(3*sizeof(int *));
	count = asArray(list,arr);
	assertEqual(count,3);
	assertEqual(*arr[0],9);
	assertEqual(*arr[1],10);
	assertEqual(*arr[2],11);
	free(arr);
}
	
int isEven(void* data) {
	return (*(int*)data%2==0) ? 1 : 0;
}

void test_filter_001() {
	log("filters all the evev numbers in a given integer linklist");
	int c = 9,d = 10,e = 11,count;
	void** arr;
	Node *node1 = create_node(&c),*node2 = create_node(&d),*node3 = create_node(&e);
	LinkedList list = createList(),*newlist;
	arr = malloc(1*sizeof(int));
	add_to_list(&list,node1);
	add_to_list(&list,node2);
	add_to_list(&list,node3);
	newlist = filter(list,isEven);
	assertEqual(*((int *)getElementAt(*newlist,0)),10);
	assertEqual((*newlist).count,1);
	free(arr);
}













