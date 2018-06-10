// Find the two non-repeating elements in an array of repeating elements


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,i;
	set< ll > acc;
	cin>>n;
	set< ll >::iterator it;
	for(i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		
		it = acc.find(x);
		if(it!=acc.end())
		{
			acc.erase(it);
		}
		else
		{
			acc.insert(x);
		}
	}
	cout<<"Non repeating numbers:";
	for(it=acc.begin();it!=acc.end();it++)
	{
		cout<<(*it)<<' ';
	}
	cout<<endl;
	return 0;
}