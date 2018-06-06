// Find the two numbers with odd occurrences in an unsorted array
// NAIVE : Pick one element and count its occurence: O(n^2)
// SORT APPROACH : O(nlogn)
// HASH TABLE : O(n) space: O(n)
// XOR : O(n) space: O(1)

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll i;
	ll XOR=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		XOR=XOR^arr[i];
	}
	ll set_bit = (XOR) & ~(XOR-1);
	ll x=0,y=0;
	for(i=0;i<n;i++)
	{
		if(set_bit & arr[i])
			x=x^arr[i];
		else
			y=y^arr[i];
	}
	cout<<"ODD occurence:"<<x<<' '<<y;
	return 0;
}