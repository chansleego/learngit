 ///
 /// @file    String.cc
 /// @author  chans(好好敲，别偷懒~~)
 /// @date    2018-02-26 15:13:04
 ///
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class String
{
	public:
	 	String()
		: _pstr(new char[1]())
		{
			cout<<"我是String()"<<endl;
		}

	 	String(const char *pstr)
		: _pstr(new char[strlen(pstr)+1]())
		{
			cout << "String(const char *pstr)" << endl;
			strcpy(_pstr,pstr);
		}

	 	String(const String & rhs)
		:	_pstr(new char[strlen(_pstr)+1]())
		{
			cout << "const string & rhs" << endl;
			strcpy(_pstr,rhs._pstr);
		}
	 	String & operator = (const String & rhs)
		{
			delete [] _pstr;
			_pstr = new char[strlen(rhs._pstr)]();
			strcpy(_pstr,rhs._pstr);

		}
	 	~String()
		{
			cout << "----------" << endl;
		}

		void print()
		{
			if(_pstr)
			{
				cout<<_pstr<<endl;
			}
		}
		
	private:
		char * _pstr;
};

int main(void)
{
	String str1 ;
	str1.print();

	String str2 = "Hello,World";
	String str3("wangdao");

	str2.print();
	str3.print();
    ~string();
	String str4 = str3;
	str4.print();

	str4 = str2;
	str4.print();

	return 0;
}
