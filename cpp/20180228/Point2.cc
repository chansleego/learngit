 ///
 /// @file    Point.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-02-28 15:15:19
 ///
#include <math.h>
#include <iostream>
using std::cout;
using std::endl;

class Point;

float distance(const Point & lhs, const Point & rhs);

class Point 
{

	friend float distance(const Point & lhs, const Point & rhs);
	public:
		Point(int ix = 0,int iy = 0)
		: _ix(ix)
		, _iy(iy)
		{
			cout << " Point(int,int)" << endl;
		}

		void print(int , int) const
		{
			cout << "(" << _ix
				 << "," << _iy
				 << ")" << endl;
		}
	private:
		int _ix;
		int _iy;
};

float distance(const Point & lhs, const Point & rhs)
{
	return sqrt((lhs._ix-rhs._ix) * (lhs._ix-rhs._iy) + (lhs._iy-rhs._iy) * (lhs._iy-rhs._iy ));
}

int main(void)
{
	Point pt1(1,2);
	Point pt2(3,4);
	cout << "++++++++++++++++++++" << endl;
	pt1.print(1,2);
	pt2.print(3,4);
	cout << distance(pt1,pt2) << endl;
	return 0;
	
}
