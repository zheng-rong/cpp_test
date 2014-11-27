#ifndef todo_h
#define todo_h
#include <iostream>
#include <string>
#include <vector>


using namespace std;


class todo
{
	private:
        int a;
        int b;
        std::vector< std::string > this_tasks;

        public:
        todo();                 	//default constructor, NO return!
	//~todo();
        todo(int para_1 , int para_2);	//constructor, NO return!
        
	int sum(void)
	{
		return a+b;
	}


        size_t size() const;
        void addtask(const std::string task);  //& task
        std::string gettask(size_t index) const;

};


//constructor: there is no return, not even void!
//default constructor, takes no parameters.
todo::todo()
{
        cout << "I constructed a object of class todo" << endl;
}

todo::todo(int para_1, int para_2)
{
	a = para_1;
	b = para_2;
        cout << "I constructed a object of class todo with parameter "<< a <<" and "<< b <<endl;
}

size_t todo::size() const
{
    return this_tasks.size();
}


void todo::addtask(const std::string task)
{
    this_tasks.push_back(task);
	cout << "&task:" << & task << endl;
	cout << "task: " << task << endl;
}

std::string todo::gettask(size_t index) const
{
    if (index < this_tasks.size())
    {
        return this_tasks[index];
    }
    else
    {
        return "";
    }
}


#endif


