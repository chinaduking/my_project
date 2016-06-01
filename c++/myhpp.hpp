#include<iostream>
using namespace std;

class A
{
        public:
                void put(void)
                {
                        cout<<"hpp test is Ok"<<endl;
                }

		void putnum(int input)
		{
			cout<<"you input num is: ";
			cout<<input;
			cout<<endl;
		}

		int output(int input);
};

int A::output(int input)
{
	cout<<"you input num is: ";
	cout<<input;
	cout<<endl;
	return input;	
}
