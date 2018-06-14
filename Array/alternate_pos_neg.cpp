// Create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers respectively.
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll i,n;
	    cin>>n;
	    ll arr[n];
	    for(i=0;i<n;i++)cin>>arr[i];
	    ll j=0,save;
        ll b[n]={0};
        for(i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                b[j]=arr[i];
                j++;
            }
        }
        save=j;
        for(i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                b[j]=arr[i];
                j++;
            }
        }
        
        ll k;
        for(i=1,k=save;k<n;i+=2,k++)
        {
            ll temp=b[k];
            for(ll l=k;l>(i);l--)
            {
                b[l]=b[l-1];
            }
            b[i]=temp;
        }
	    for(i=0;i<n;i++)
	    {
	        cout<<b[i]<<' ';
	    }
	    cout<<endl;

	}
	return 0;
}