#include <iostream>
#include <string>
#include <map> 
#include <vector>


using namespace std;
// if not using the namespace std, the cout<<"xxx" should be std::cout << "xxx"

using std::cerr;
using std::cout;
using std::endl;
//using std::newline;

#include "todo.h"

#define EXPECT_EQUAL(test, expect) equalityTest( test,  expect, \
                                                #test, #expect, \
                                                __FILE__, __LINE__)
/*
template < typename T1, typename T2 >
int equalityTest(const T1    testValue,
                 const T2    expectedValue,
                 const char* testName,
                 const char* expectedName,
                 const char* fileName,
                 const int   lineNumber);
*/

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
            cerr << fileName << ":" << lineNumber << ": " << endl
        << "Expected: " << endl
        << " the item " << "(" << testName << ") " 
        << "is equal to " << "(" << expectedName << ")"<< endl
        << "But " << endl
        << " the value " << "(" << testValue << ") " 
        << "is not equal to " << "(" << expectedValue << ")"
        << endl;

            return 1;
        }
        else
    {
            return 0;
    }

}


int main(int argc, char** argv)
{

    cout << "=======this is class test" << endl;
	todo list;		//default construction, no ()!
	todo list_2 (3,5);	//
	cout << "the sum is "<< list_2.sum() << endl;
	//todo list_1 {};
	//todo list_3 {3,6};
	//todo list_4 = (6,8);
	//todo list_5 = {5,7};

	int result = 0;
	
	list.addtask("write code");
	list.addtask("compile");
	list.addtask("test");

    cout << "=======this is template test" << endl;
	result |= EXPECT_EQUAL(list.size(),	3);
	result |= EXPECT_EQUAL(list.gettask(0), "write code");
	result |= EXPECT_EQUAL(list.gettask(1),	"compile");
	result |= EXPECT_EQUAL(list.gettask(2),	"test");
    result |= EXPECT_EQUAL(list.gettask(1), list.gettask(2));

	if(result == 0)
	{
		cout << "test passed" << endl;
	}
    //--------------------------------------map, pair
    /*
    map的基本操作函数：
      C++ Maps是一种关联式容器，包含“关键字/值”对
      begin()          返回指向map头部的迭代器
      clear(）         删除所有元素
      count()          返回指定元素出现的次数
      empty()          如果map为空则返回true
      end()            返回指向map末尾的迭代器
      equal_range()    返回特殊条目的迭代器对
      erase()          删除一个元素
      find()           查找一个元素
      get_allocator()  返回map的配置器
      insert()         插入元素
      key_comp()       返回比较元素key的函数
      lower_bound()    返回键值>=给定元素的第一个位置
      max_size()       返回可以容纳的最大元素个数
      rbegin()         返回一个指向map尾部的逆向迭代器
      rend()           返回一个指向map头部的逆向迭代器
      size()           返回map中元素的个数
      swap()            交换两个map
      upper_bound()     返回键值>给定元素的第一个位置
      value_comp()      返回比较元素value的函数
      */
    cout << "=======this is map & pair test" << endl;
    std::map<const char *, int> test_map;
    map<const char*, int>::iterator it;

    test_map["a"] = 111111;
    test_map["b"] = 222222;
    test_map.insert(pair<const char *, int>("c",333333));


    if (test_map.empty())
    {
        cout << "the map is empty" << endl;
    }
    else
    {
        cout << "the map is not empty, size: " << test_map.size() << endl;
    }
    
    for(it = test_map.begin();it != test_map.end();it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    std::map<int, string> string_map;
    std::map<int, string>::iterator str_it;
    string_map.insert(pair<int, string> (1,"one"));
    string_map.insert(pair<int, string> (2,"two"));
    string_map.insert(pair<int, string> (3,"three"));
    string_map.insert(pair<int, string> (4,"four"));
    string_map.insert(pair<int, string> (5,"five"));
    string_map.insert(pair<int, string> (6,"six"));

    cout << string_map.begin()->second << endl;
    cout << string_map.find(2)->second << endl;
    cout << string_map[3] << endl;   
    cout << string_map.at(4) << endl; 
    cout << string_map.size() << endl;
    str_it = string_map.find(4);
    string_map.erase(str_it);
    cout << string_map.size() << endl;
    string_map.clear();
    cout << string_map.size() << endl;
    cout << string_map.max_size() << endl;

    //--------------------------------------vector
    cout << "=======this is vector test" << endl;
    std::vector<int> vec_test(3,100);
    std::vector<int>::iterator vec_it;

    for (vec_it = vec_test.begin();vec_it!=vec_test.end();vec_it++)
    {
        cout << *vec_it << endl;
    }
    
    cout << vec_test.at(0) << endl;
    cout << vec_test.at(1) << endl;
    cout << vec_test.at(2) << endl;

    vec_it = vec_test.begin();
    vec_it = vec_test.insert(vec_it, 200);
    vec_it = vec_test.insert(vec_it, 300);
    vec_it = vec_test.insert(vec_it, 400);

    for (vec_it = vec_test.begin();vec_it!=vec_test.end();vec_it++)
    {
        cout << *vec_it << endl;
    }

    vec_it = vec_test.begin();
    cout << *vec_it << endl;
    cout << *(vec_it+1) << endl;
 

	//--------------------------------------cout
    cout << "=======this is string output test"	<< endl;
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







