//Knapsack Problem

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector< pair <ll , ll > > inp;
vector< vector < ll > > dp;

ll knapsack(ll n, ll W)
{
    if(n>=0)
    {
        if(dp[n][W] == -1) {
        ll max1 =0, max2 = 0;
        max1 = knapsack(n-1,W);
        
        if(inp[n].second <= W)
        {
            max2 = inp[n].first + knapsack(n-1,W-inp[n].second);
        }
        dp[n][W] = max(max1,max2);
        }
        return dp[n][W];
    }
    else
        return 0;
}

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,W;
	    cin>>n;
	    inp.resize(n);
	    cin>>W;
	    dp.resize(n+1);
	    ll i;
	    for(i=0;i<=n;i++)
	    {
	        dp[i].resize(W+1);
	        fill(dp[i].begin(),dp[i].end(),-1);
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>inp[i].first;
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>inp[i].second;
	    }
	    dp[n][W]=knapsack(n-1,W);
	    cout<<dp[n][W]<<endl;
	    inp.clear();
	    dp.clear();
	}
	return 0;
}