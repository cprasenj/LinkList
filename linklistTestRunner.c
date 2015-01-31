#include <stdio.h>
typedef void TestFn(void);
typedef struct{
	char* name; 
	TestFn* fn;
} Test;

//code to be updated starts
TestFn setup,teardown,fixtureSetup,fixtureTearDown,test_createList_001,test_create_node_001,test_create_node_002,test_create_node_003,test_create_node_004,test_create_node_005,test_create_node_006,test_create_node_007,test_create_node_008,test_add_to_list_001,test_add_to_list_002,test_add_to_list_003,test_add_to_list_004,test_add_to_list_005,test_add_to_list_006,test_add_to_list_007,test_add_to_list_008,test_add_to_list_009,test_add_to_list_010,test_add_to_list_0011,test_add_to_list_012,test_get_first_element_001,test_get_first_element_002,test_get_first_element_003,test_get_first_element_004,test_get_first_element_005,test_get_first_element_006,test_get_first_element_007,test_get_first_element_008,test_get_first_element_009,test_get_first_element_010,test_get_last_element_001,test_get_last_element_002,test_get_last_element_003,test_get_last_element_004,test_get_last_element_005,test_get_last_element_006,test_traverse_001,test_traverse_002,test_getElementAt_001,test_getElementAt_002,test_getElementAt_003,test_getElementAt_004,test_getElementAt_005,test_getElementAt_006,test_getElementAt_007,test_indexOf_001,test_indexOf_002,test_indexOf_003,test_indexOf_004,test_indexOf_005,test_indexOf_006,test_indexOf_007,test_indexOf_008,test_indexOf_009,test_indexOf_010,test_indexOf_011,test_deleteElementAt_001,test_deleteElementAt_002,test_deleteElementAt_003,test_deleteElementAt_004,test_deleteElementAt_005,test_deleteElementAt_006,test_deleteElementAt_007,test_deleteElementAt_008,test_get_last_element_and_get_frist_element,test_asArray_001,test_filter_001;
Test test[] = {"test_createList_001",test_createList_001,"test_create_node_001",test_create_node_001,"test_create_node_002",test_create_node_002,"test_create_node_003",test_create_node_003,"test_create_node_004",test_create_node_004,"test_create_node_005",test_create_node_005,"test_create_node_006",test_create_node_006,"test_create_node_007",test_create_node_007,"test_create_node_008",test_create_node_008,"test_add_to_list_001",test_add_to_list_001,"test_add_to_list_002",test_add_to_list_002,"test_add_to_list_003",test_add_to_list_003,"test_add_to_list_004",test_add_to_list_004,"test_add_to_list_005",test_add_to_list_005,"test_add_to_list_006",test_add_to_list_006,"test_add_to_list_007",test_add_to_list_007,"test_add_to_list_008",test_add_to_list_008,"test_add_to_list_009",test_add_to_list_009,"test_add_to_list_010",test_add_to_list_010,"test_add_to_list_0011",test_add_to_list_0011,"test_add_to_list_012",test_add_to_list_012,"test_get_first_element_001",test_get_first_element_001,"test_get_first_element_002",test_get_first_element_002,"test_get_first_element_003",test_get_first_element_003,"test_get_first_element_004",test_get_first_element_004,"test_get_first_element_005",test_get_first_element_005,"test_get_first_element_006",test_get_first_element_006,"test_get_first_element_007",test_get_first_element_007,"test_get_first_element_008",test_get_first_element_008,"test_get_first_element_009",test_get_first_element_009,"test_get_first_element_010",test_get_first_element_010,"test_get_last_element_001",test_get_last_element_001,"test_get_last_element_002",test_get_last_element_002,"test_get_last_element_003",test_get_last_element_003,"test_get_last_element_004",test_get_last_element_004,"test_get_last_element_005",test_get_last_element_005,"test_get_last_element_006",test_get_last_element_006,"test_traverse_001",test_traverse_001,"test_traverse_002",test_traverse_002,"test_getElementAt_001",test_getElementAt_001,"test_getElementAt_002",test_getElementAt_002,"test_getElementAt_003",test_getElementAt_003,"test_getElementAt_004",test_getElementAt_004,"test_getElementAt_005",test_getElementAt_005,"test_getElementAt_006",test_getElementAt_006,"test_getElementAt_007",test_getElementAt_007,"test_indexOf_001",test_indexOf_001,"test_indexOf_002",test_indexOf_002,"test_indexOf_003",test_indexOf_003,"test_indexOf_004",test_indexOf_004,"test_indexOf_005",test_indexOf_005,"test_indexOf_006",test_indexOf_006,"test_indexOf_007",test_indexOf_007,"test_indexOf_008",test_indexOf_008,"test_indexOf_009",test_indexOf_009,"test_indexOf_010",test_indexOf_010,"test_indexOf_011",test_indexOf_011,"test_deleteElementAt_001",test_deleteElementAt_001,"test_deleteElementAt_002",test_deleteElementAt_002,"test_deleteElementAt_003",test_deleteElementAt_003,"test_deleteElementAt_004",test_deleteElementAt_004,"test_deleteElementAt_005",test_deleteElementAt_005,"test_deleteElementAt_006",test_deleteElementAt_006,"test_deleteElementAt_007",test_deleteElementAt_007,"test_deleteElementAt_008",test_deleteElementAt_008,"test_get_last_element_and_get_frist_element",test_get_last_element_and_get_frist_element,"test_asArray_001",test_asArray_001,"test_filter_001",test_filter_001};
char testFileName[] = {"linklistTest.c"};
void _setup(){/*CALL_SETUP*/}
void _teardown(){/*CALL_TEARDOWN*/}
void fixtureSetup(){}
void fixtureTearDown(){}
//code to be updated ends

int testCount;
int passCount;
int currentTestFailed;

int assert_expr(int expr, const char* fileName, int lineNumber, const char* expression){
	if(expr) return 0;
	currentTestFailed = 1;
	printf("\t %s : failed at %s:%d\n",expression, fileName,lineNumber);
	return 1;
}
int assert_equal(int val1, int val2, const char* fileName, int lineNumber,const char* expr1,const char* expr2){
	if(val1 == val2) return 0;
	currentTestFailed = 1;
	printf("\t %d == %d: failed in assertEqual(%s,%s) at %s:%d\n",val1,val2,expr1,expr2, fileName,lineNumber);
	return 1;
}

void runTest(char* name, TestFn test){
	testCount++,currentTestFailed=0;
	printf("**  %s\n",name);
	_setup();
		test();
	_teardown();
	if(!currentTestFailed) passCount++;	
}
int main(int argc, char const *argv[]){		
	int i,total = sizeof(test)/sizeof(Test);	
	fixtureSetup();
	testCount=0,passCount=0;
	printf("**------ %s ------\n",testFileName);
	for (i = 0; i < total; ++i)
		runTest(test[i].name,test[i].fn);	
	printf("** Ran %d tests passed %d failed %d\n",testCount,passCount,testCount-passCount);
	fixtureTearDown();	
	return 0;
}