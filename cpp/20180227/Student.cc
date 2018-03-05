 ///
 /// @file    Student.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-03-05 14:26:21
 ///
#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Student
{
	public:
		Student(char name,int score)
		:	_name(new char[strlen(name) + 1]())
		,	_score(score)
		{
			cout << "Student(const char *,int)" << endl;
			strcpy(_name,name);
		}

		void print() const
		{
			cout << "name: " << _name << endl;
			cout << "score: " << _score << endl;
		}

		~Student()
		{
			cout << "~Student" << endl;
			delete [] _name;
		
		}

		void * operator new(size_t sz)
		{
		    cout << "void * operator new(size_t sz)" << endl;
			void * ret = malloc(sz);
			return ret;
		}

		void operator delete(void * ret)
		{
			cout << "operator delete(void * ret)" << endl;
			free(ret);
		}


	private:
		char _name;
		float _score;
};

int main(void)
{
	Student s1("Mike",100);
	Student * pstu = new Student ("Jack",101);
	pstu->print();

	delete pstu;
	return 0;

}
