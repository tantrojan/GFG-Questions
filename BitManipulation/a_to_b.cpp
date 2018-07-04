//Count numer of set its to be flipped to convert A to B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll set_bits(ll x)
{
    // ll digs=log2(x)+1;
    ll c=0;
    while(x>0)
    {
        if((x&1)==1)
            c++;
        x=x>>1;
    }
    return c;
}

int main() {
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<set_bits(n)<<endl;
	    
	}
	return 0;
}