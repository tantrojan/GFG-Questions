//Search in Sorted Matrix
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m,i,j;
	    cin>>n>>m;
	    ll arr[n][m];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    ll x;
	    cin>>x;
	    j=m-1;
	    i=0;
	    ll f=0;
	    while(i<n && j>=0)
	    {
	        if(arr[i][j]==x)
	        {
	            f=1;
	            break;
	        }
	        else if(arr[i][j]<x)
	        {
	            i++;
	        }
	        else
	        {
	            j--;
	        }
	    }
	    if(f==1)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}