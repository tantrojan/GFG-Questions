// Rotate bits of an integer
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

ll rotate_bits(ll x,ll k)
{
    return ((x<<d | x>>(32-d)));
}

int main()
{
	ll n,t,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<rotate_bits(n,k)<<endl;
	}
	return 0;
}