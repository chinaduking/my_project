/*cpptest.cpp*/
#include<iostream>
#include "myhpp.hpp"
using namespace std;

enum OutResylt {Win,Lose,TIE,CANCEL};

class TEST
{
	public:
		void myTest(void);

};

void TEST::myTest(void)
{
	cout<<"This is a class Test...too"<<endl;
}


int main()
{
	OutResylt Output;
	TEST T;
	A a;
	int rec_num = 0;
	enum OutResylt omit = CANCEL;
	for(int count = Win;count<=CANCEL;count++)
	{
		Output = OutResylt(count);
		if(Output==omit)
			cout<<"The game was cancelled"<<endl;
		else
		{
			cout<<"The game was played";
			if(Output==Win)
				cout<<"and we win!";
			if(Output==Lose)
				cout<<"and we lose...";
			cout<<endl;
		}
	}
	cout<<"---------------class test-------------------"<<endl;
	T.myTest();
	cout<<"---------------hpp test-------------------"<<endl;
	a.put();
	a.putnum(100);
	rec_num = a.output(200);
	cout<<"you rec num is: ";
	cout<<rec_num<<endl;
	return 0;
}

