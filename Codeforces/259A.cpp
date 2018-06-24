#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n/2;i++)
	{
		for(j=i;j<(n/2);j++)
		{
			cout<<'*';
		}
		for(j=0;j<(2*i+1);j++)
		{
			cout<<'D';
		}
		for(j=i;j<(n/2);j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
	for(i=0;i<n;i++)cout<<'D';
		cout<<endl;
	for(i=n/2-1;i>=0;i--)
	{
		for(j=i;j<(n/2);j++)
		{
			cout<<'*';
		}
		for(j=0;j<(2*i+1);j++)
		{
			cout<<'D';
		}
		for(j=i;j<(n/2);j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}

	return 0;
}