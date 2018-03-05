 ///
 /// @file    mem.cc
 /// @author  chans(haohb13@gmail.com)
 /// @date    2018-02-23 16:43:40
 ///

#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

int a ;
char * p1;

int test(void)
{
	return 0;
}

int main(void)
{
	int b;
	char s[] = "123456";
	char * p2;
	char * p3 = "123456";
	static int c = 1;

	//*p3 = 'H';

	printf("&b = %p	",&b);
	printf("b = %p\n",b);

	printf("&s = %p	",&s);
	printf("s = %p\n",s);
	


	printf("&a = %p		",&a);
	printf("a = %p\n",a);
	
	printf("&p1 = %p		",&p1);
	printf("p1 = %p\n",p1);
	
	printf("&p2 = %p	",&p2);
	printf("p2 = %p\n",p2);
	
	printf("&p3 = %p	",&p3);
	printf("p3 = %p\n",p3);

	printf("&c = %p\n",&c);

	p1= new char[10];
	p2 = new char[5];

	printf("&p1 = %p\n",p1);
	printf("&p2 = %p\n",p2);
	
	printf("test = %p\n",test);
	
	return 0;
}
