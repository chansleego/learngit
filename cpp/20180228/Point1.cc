 ///
 /// @file    Point1.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-02-28 15:15:19
 ///
#include <math.h>
#include <iostream>
using std::cout;
using std::endl;

class Point;


class Line
{
public:
	float distance(const Point & lhs, const Point & rhs);

	void setIz(int iz);
private:
	int _iz;
};

class Point 
{

	friend float Line::distance(const Point & lhs, const Point & rhs);
public:
	Point(int ix = 0,int iy = 0)
	: _ix(ix)
	, _iy(iy)
	{
		cout << " Point(int,int)" << endl;
	}

	void print() const
	{
		cout << "(" << _ix
			 << "," << _iy
			 << ")" << endl;
	}

	void setLine(Line & line, int iz)
	{
		//line._iz = iz;
		line.setIz(iz);
	}
private:
	int _ix;
	int _iy;
};


float Line::distance(const Point & lhs, const Point & rhs)
{
	return sqrt((lhs._ix-rhs._ix) * (lhs._ix-rhs._iy) + (lhs._iy-rhs._iy) * (lhs._iy-rhs._iy ));
}
int main(void)
{
	Point pt1(9,2);
	Point pt2(5,4);
	cout << "++++++++++++++++++++" << endl;
	pt1.print();
	pt2.print();
	Line line;
	cout << line.distance(pt1,pt2) << endl;
	return 0;
	
}
