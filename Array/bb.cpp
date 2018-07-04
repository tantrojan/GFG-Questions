#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,i,x,y;
	cin>>n>>x>>y;
	string st;
	cin>>st;
	ll zeroes=0;
	for(i=0;i<n;)
	{
		if(st[i]=='0')
		{
			while( i<n-1 && st[i+1]=='0')
			{
				i++;
			}
			i++;
			zeroes++;
		}
		else
		{
			i++;
		}
	}
	// cout<<zeroes<<endl;
	if(zeroes==0)
	{
		cout<<0<<endl;
	}
	else
	{
		int shifts=zeroes;
		if(st[0]=='0' || st[n-1]=='0')
		{
			shifts--;
		}
		cout<<min(y*zeroes,y+shifts*x)<<endl;
	}
	return 0;
}