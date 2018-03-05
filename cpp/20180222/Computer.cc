 ///
 /// @file    Computer.cc
 /// @author  chans(haohb13@gmail.com)
 /// @date    2018-02-23 23:05:51
 ///
#include <string.h> 
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
	public:
		void print()
		{
			cout<<"品牌"<<_brand<<endl;
			cout<<"价格"<<_price<<endl;
		}

		void setBrand(const char * brand)
		{
			strcpy(_brand,brand);
		}

		void setPrice(float price)
		{
			_price = price;
		}
	protected:
	private:
		char _brand[20];
		float _price;
};


int main(void)
{
	Computer com;
	com.setBrand("alient");
	com.setPrice(29999);
	com.print();

	return 0;
}
