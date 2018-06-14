//Product of all the elements except the present element without using division
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
	    int left[n];
	    int right[n];
	    left[0]=1;
	    right[n-1]=1;
	    for(i=1;i<n;i++)
	    {
	        left[i]=left[i-1]*arr[i-1];
	    }
	    for(i=n-2;i>=0;i--)
	    {
	        right[i]=right[i+1]*arr[i+1];
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<left[i]*right[i]<<' ';
	    }
	    cout<<endl;
	}
	return 0;
}