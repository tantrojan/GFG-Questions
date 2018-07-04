// Check for power of two
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll check_power(ll x)
{
	if(x && (x&(x-1))==0)
		return 1;
	return 0;
}

int main()
{
	ll n;
	cin>>n;
	cout<<check_power(n);
	return 0;
}