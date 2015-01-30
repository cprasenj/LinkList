#include <stdio.h>
#include "linklist.h"
#define string char*

int main() {
	string s="parasnjit",s1="chkraborty";
	Node* n=create_node(s),*n2=create_node(s1);
	LinkedList list=createList();
	add_to_list(&list,n);
	add_to_list(&list,n2);


	printf("%s\n",getElementAt(list,0));
	printf("%s\n",getElementAt(list,1));

	return 0;
}