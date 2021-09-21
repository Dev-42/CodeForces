#include <bits/stdc++.h>
using namespace std;
//conversion of (only) uppercase characters to lowercase
string convertString(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	}
	return str;
}
//use compare function to compare the strings
int main()
{
	string str1,str2;
	cin>>str1>>str2;
	string st1=convertString(str1);
	string st2=convertString(str2);
	if(st1.compare(st2)==0)
	{
		cout<<"0"<<endl;
	}
	else if(st1.compare(st2)==1)
	{
		cout<<"1"<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
	return 0;
}
