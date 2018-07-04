// toggle bits
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll reverse_bits(ll x)
{
    ll digs=log2(x)+1;
    ll res=0;
    ll i;
    for(i=0;i<digs;i++)
    {
        ll power=(1<<i);
        if(power!=(x&power))
        {
              res+=power;
            //   cout<<res<<' '<<x<<' '<<((1<<i)&x)<<endl;
        }
    }
    return res;
}

int main() {
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<reverse_bits(n)<<endl;
	}
	return 0;
}