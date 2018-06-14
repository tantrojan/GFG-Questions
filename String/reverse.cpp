//Reverse Print a string using recursion
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void reverse(string a, int i)
{
	if(a[i])
	{
		reverse(a,i+1);
		cout<<a[i];
	}
}

int main()
{
	string str;
	getline(cin,str);
	// cout<<str;
	reverse(str,0);
	return 0;
}