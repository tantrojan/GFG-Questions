// Find the two non-repeating elements in an array of repeating elements using XOR

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void two_non_repeat(std::vector<ll> v,ll n,ll &x,ll &y)
{
	ll XOR=0;
	ll i;
	for(i=0;i<n;i++)
	{
		XOR=XOR^v[i];
	}
	// cout<<XOR;
	ll set_bit = (XOR) & ~(XOR-1);
	// cout<<set_bit;
	x=0;y=0;
	for(i=0;i<n;i++)
	{
		if(set_bit & v[i])
			x=x^v[i];
		else
			y=y^v[i];
	}
}

int main()
{
	ll n,i,x,y;
	cin>>n;
	std::vector<ll> v(n);
	for(i=0;i<n;i++)cin>>v[i];
	two_non_repeat(v,n,x,y);
	cout<<"Non Repeating numbers :"<<x<<' '<<y;
	return 0;

}