#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;

using namespace std;
// if not using the namespace std, the cout<<"xxx" should be std::cout << "xxx"


#include "todo.h"

#define EXPECT_EQUAL(test, expect) equalityTest( test,  expect, \
                                                #test, #expect, \
                                                __FILE__, __LINE__)

template < typename T1, typename T2 >
int equalityTest(const T1    testValue,
                 const T2    expectedValue,
                 const char* testName,
                 const char* expectedName,
                 const char* fileName,
                 const int   lineNumber);


int main(int argc, char** argv)
{
	todo list;		//default construction, no ()!
	todo list_2 (3,5);	//
	cout << "the sum is "<< list_2.sum() << endl;
	//todo list_1 {};
	//todo list_3 {3,6};
	//todo list_4 = (6,8);
	//todo list_5 = {5,7};

	int result = 0;
	
	list.addtask("write code");
	list.addtask("compilt");
	list.addtask("test");

	result |= EXPECT_EQUAL(list.size(),	3);
	result |= EXPECT_EQUAL(list.gettask(0), "write code");
	result |= EXPECT_EQUAL(list.gettask(1),	"compile");
	result |= EXPECT_EQUAL(list.gettask(2),	"test");

	if(result == 0)
	{
		cout << "test passed" << endl;
	}
	//--------------------------------------	
	int index = 0;
        const double pi = 3.14159;
        const char newline = '\n';
        int b;
        int a = (b=3, b+2);

        cout << "hello world!\r\n";

        string st1;
	st1  = "output_test";
        string st2 = "string expressed \
                        in two lines";

        cout << st1 << endl;
        cout << a << endl;
        cout << "PI=" << pi;
        cout << newline;
	//------------------------------------

	return 0;
}


template < typename T1, typename T2 >
int equalityTest(const T1    testValue,
                 const T2    expectedValue,
                 const char* testName,
                 const char* expectedName,
                 const char* fileName,
                 const int   lineNumber)
{
	if (testValue != expectedValue)
    	{
        	cerr << fileName << ":" << lineNumber << ": "
		<< "Expected " << testName << " "
		<< "to equal " << expectedName << " (" << expectedValue << ") "
             	<< "but it was (" << testValue << ")" << endl;

        	return 1;
    	}
    	else
	{
       		return 0;
	}

}




