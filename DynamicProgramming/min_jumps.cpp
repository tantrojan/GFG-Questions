
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector< ll > a;
vector< ll > jump;


ll min_jumps(ll i,ll n)
{
    if(i>=0 && i<n)
    {
        if(i==(n-1))
        {
            jump[i]=0;
        }
        if(jump[i]==-1)
        {
            ll j;
            ll cal=INT_MAX;
            for(j=i+1;j<=(i+a[i]);j++)
            {
                cal=min(min_jumps(j,n),cal);
            }
            if(cal!=INT_MAX)
                jump[i]=cal+1;
            else
                jump[i] = cal;
        }
        return jump[i];
    }
    else
    {
        return INT_MAX;
    }
}

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    a.resize(n);
	    jump.resize(n);
	    fill(jump.begin(),jump.end(),-1);
	    ll i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    min_jumps(0,n);
	    if(jump[0] == INT_MAX) 
	        cout<<"-1"<<endl;
	    else
	        cout<<jump[0]<<endl;
	    a.clear();
	    jump.clear();
	    
	}
	return 0;
}