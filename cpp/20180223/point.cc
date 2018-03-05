 ///
 /// @file    Point.cc
 /// @author  chans(haohb13@gmail.com)
 /// @date    2018-02-25 21:07:11
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
	public:
		Point(int ix,int iy)
		:	_ix(ix)
		,   _iy(iy)
		{
			cout<<"cout"<<endl;
		}

	private:
		const int _ix;
		const int _iy;
	
};

int main(void)
{
	Point pt(3,4);
	return 0;
}

