//reverse bits
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll reverse_bits(ll x)
{
    ll res=0;
    ll i;
    for(i=0;i<32;i++)
    {
        ll power=pow(2,i);
        if(power==(x&power))
        {
              res+=(ll)(pow(2,31-i));
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