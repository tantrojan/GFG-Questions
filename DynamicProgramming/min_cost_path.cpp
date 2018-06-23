// Minimum cost to travel from (0,0) to (n-1,n-1)
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector< vector < ll > > arr;
vector< vector < ll > > dp;

ll min_cost_path(ll i, ll j, ll n)
{
    if(i < n && i >= 0 && j < n && j >= 0)
    {
        if(i==n-1 && j==n-1)
        	dp[i][j]=arr[i][j];
        if(dp[i][j]==-1)
            dp[i][j]=arr[i][j] + min(min_cost_path(i+1,j+1,n),min(min_cost_path(i,j+1,n),min_cost_path(i+1,j,n)));
        return dp[i][j];
    }
    return INT_MAX;
}

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    arr.resize(n);
	    dp.resize(n);
	    ll i,j;
	    for(i=0;i<n;i++)
	    {
	        arr[i].resize(n);
	        dp[i].resize(n);
	        fill(dp[i].begin(),dp[i].end(),-1);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    min_cost_path(0,0,n);
	    // cout<<dp[0][0]<<endl;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cout<<dp[i][j]<<' ';
	        }
	    }
	    
	    arr.clear();
	    dp.clear();
	}
	return 0;
}