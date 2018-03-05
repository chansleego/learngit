 ///
 /// @file    string.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-03-01 22:26:49
 ///
 
#include <iostream>
using std::cout;
using std::endl;
using std::string;
int main(void)
{
	string s1 = "hello,world";
	string s2 = s1;
	string s3 = s1;

	s1 = 'H';

	cout << "s1 = " << s1 << endl << "&s1 = " << &s1 << endl;//error，这种方式拿不到地址
	cout << "s2 = " << s2 << endl << "&s2 = " << &s2 << endl;
	cout << "s3 = " << s3 << endl << "&s3 = " << &s3 << endl;

	cout << "s1 = " << s1.c_str() << endl;

	cout << "&&s2 = %p" << s2.c_str() << endl;

	return 0;
}
