 ///
 /// @file    point.cc
 /// @author  chans(haohb13@gmail.com)
 /// @date    2018-02-24 15:59:40
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
	
	public:
		void print(int x,int y)
		{
			_ix = x;
			_iy = y;
			cout<<"_ix="<<_ix
				<<"_iy"<<_iy<<endl;

		//	cout<<"无参构造函数"<< endl;
		}

	private:
		int _ix;
		int _iy;
};

int main(void)
{
	Point pt;
	pt.print(3,4);
	return 0;
}
