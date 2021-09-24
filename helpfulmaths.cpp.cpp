#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str,result="";
	getline(cin,str);
	sort(str.begin(),str.end());
	int find=str.find_last_of('+');
	str.erase(0,find+1);
	for(int i=0;i<str.size();i++)
	{
		result+=str[i];
		if(i!=str.size()-1)
		{
			result+='+';
		}
	}
	cout<<result<<endl;
	return 0;
}