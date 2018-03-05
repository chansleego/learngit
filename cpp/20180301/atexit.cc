 ///
 /// @file    atexit.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-03-01 22:17:54
 ///

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;


void atexit()
{
	cout << "++++++++++++++++++++++++++++" << endl;
}

int main(void)
{
	atexit();

	atexit();
	atexit();
	cout << "register" << endl;
}
