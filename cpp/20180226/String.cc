 ///
 /// @file    String.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-02-26 15:13:04
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class String
{
	public:
	 	String()
		{
			cout<<"实现了第一个构造函数"<<endl;
		}
	// 	String(const char *pstr);
	// 	String(const String & rhs);
	// 	String & operator = (const String & rhs);
	// 	~String();

		void print()
		{
			
		}

	private:
		char * _pstr;
};

int main(void)
{
	String str1 ;
	str1.print();
//
//	String str2 = "Hello , World";
//	String str3("wangdao");
//
//	str2.print();
//	str3.print();
//
//	String str4 = str3;
//	str4.print();
//
//	str4 = str2;
//	str4.print();

	return 0;
}
