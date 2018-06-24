#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string str;
	cin>>n>>str;
	int i,one=0,zero=0;
	for(i=0;i<n;i++)
	{
		if(str[i]=='0')
			zero++;
		else
			one++;
	}
	cout<<abs(zero-one)<<endl;
	return 0;
}