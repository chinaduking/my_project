#include <iostream>
#include <string.h>
using namespace std;

class Solution{
public:
	int strStr(string source,string target)
	{
		if(source.empty() || target.empty()) return -1;
		
		for(int i = 0;i<source.size()-target.size()+1;i++)
		{
			string::size_type j =0;
			for(;j<target.size();j++)
			{
				if(source[i+j] != target[j])
					break;
			}
			if(j == target.size()) return i;
		}
		return -1;
	}
};

/*
int Solution::strStr(string source,string target)
{
	
}
*/

int main()
{
	string source;
	string target;
	int num;
	Solution s;
	cout<<"please input your source:"<<endl;
	cin>>source;
	cout<<"please input your target:"<<endl;
	cin>>target;
	num = s.strStr(source,target);
	cout<<"Output:"<<num<<endl;
}
