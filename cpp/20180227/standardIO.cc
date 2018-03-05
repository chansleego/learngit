 ///
 /// @file    standardIO.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-02-27 14:10:52
 ///

#include <limits>
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printCin()
{
	cout << "sizeof(cin) = " << sizeof(cin) << endl;
	cout << "sizeof(cout) = " << sizeof(cout) << endl;

	cout << "cin's badbit = " << cin.bad() << endl;
	cout << "cin's failbit = " << cin.fail() << endl;
	cout << "cin's eof = " << cin.eof() << endl;
	cout << "cin's goodbit = " << cin.good() << endl;
}

int number;

int main(void)
{
	printCin();

	while(cin >> number)
	{
		cout << "number = " << number << endl;
	}
	
	printCin();

	cout << "重置流的状态" << endl;
//	cin.ignore(1024,'\n');
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	printCin();
	
	string line;
	cin >> line;
	cout << "line = " << line << endl;

	
	return 0;
}

