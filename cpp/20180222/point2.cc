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
		cout<<"构造函数就是我"<<endl;
		}
		void print()
		{
			cout<<"print"<<endl;
		}
		Point(int ix,int iy)
		{
			cout<<"Point(int,int)"<<endl;
			_ix = ix;
			_ix = iy;
		}
		~Point()
		{
			cout<<"析构函数就是我"<<endl;
		}
	private:
		int _ix;
		int _iy;
};

int main(void)
{
		Point pt;
		pt.print();
		Point pt2;
		pt2.print();

		return 0;
}
		
