 ///
 /// @file    point1.cc
 /// @author  chans(haohb13@gmail.com)
 /// @date    2018-02-24 20:31:30
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
	public:
		Point()
		{
		cout << "--------------------" << endl;
		}
		void print()
		{
			cout << "print" << endl;
		}
		Point(int ix,int iy)
		: _ix(ix)
		, _iy(iy)
		{
			cout<< "(" << _ix
				<< "," << _iy
				<< ")" << endl;
			cout << "Point(int,int)" << endl;
		}
		~Point()
		{
			cout << "析构函数就是我" << endl;
		}
	private:
		int _ix;
		int _iy;
};

void func1(Point pt)
{
	cout << "func1(Point)" << endl;
	pt.print();
}

Point func2()
{
	cout << "func2()" << endl;
	Point pt(5,6);
	pt.print();
	return pt;
}

int test(void)
{
	Point pt1(1,2);
	Point pt2 = pt1;
	pt2.print();

	Point pt3 = func2();
;
	return 0;
}

void test2(void)
{
	
}

int main(void)
{
		Point pt;
		//pt.print();
		Point pt2(1,2);
		Point pt3(pt2);
		//pt3 = pt2;
		//pt3(pt2);
		pt2.print();
		func1(pt2);
		func2();
		return 0;
}

