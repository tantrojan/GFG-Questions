// Spiral printing of MATRIX
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,j;
	    n=4;
	    ll arr[n][n];
	    //INPUT
	    for(i=0;i<n;i++)for(j=0;j<n;j++)cin>>arr[i][j];
	    //OUTPUT
	    for(i=0;i<2;i++)
	    {
	        for(j=i;j<n-i-1;j++)
	        {
	            cout<<arr[i][j]<<' '; //row fixed
	        }
	        for(j=i;j<n-i;j++)
	        {
	            cout<<arr[j][n-i-1]<<' '; //column fixed
	        }
	        for(j=n-i-2;j>=(i+1);j--)
	        {
	            cout<<arr[n-i-1][j]<<' '; //row fixed
	        }
	        for(j=n-i-1;j>=(i+1);j--)
	        {
	            cout<<arr[j][i]<<' '; //column fixed
	        }
	    }
	    cout<<endl;

	}
	return 0;
}