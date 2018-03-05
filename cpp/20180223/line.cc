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
		
		void print()
		{
			cout << "(" << _ix
				 << "," << _iy
				 << ")";
		}

	private:
		const int _ix;
		const int _iy;
	
};

class Line
{
	public:
		Line(int x1,int y1,int x2,int y2)
		: _p1(x1,y1)
		, _p2(x2,y2)
		{
			cout<<"Line(int,int,int,int)"<<endl;
		}

		void printLine()
		{
			_p1.print();
			cout << "----->";
			_p2.print();
			cout << endl;
		}

	private:
		Point _p1;
		Point _p2;
};

int main(void)
{
	Line line(1,2,3,4);
	line.printLine();
	return 0;
}

