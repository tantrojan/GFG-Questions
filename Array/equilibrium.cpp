Find points in an array where left-sum==right-sum
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i;
	    cin>>n;
	    ll arr[n],sum=0,f=0;
	    ll prefix[n+1]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        prefix[i+1]=prefix[i]+arr[i];
	        sum+=arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if((sum-prefix[i]-arr[i])==prefix[i])
	        {
	            cout<<i+1<<endl;
	            f=1;
	            break;
	        }
	    }
	    if(f==0)
	    cout<<-1<<endl;
	}
	return 0;
}