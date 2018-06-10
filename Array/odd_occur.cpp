// Find the number occuring odd number of time

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll i;
	ll res=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		res=res^arr[i];
	}
	cout<<"ODD Occurence :"<<res;
	return 0;

}