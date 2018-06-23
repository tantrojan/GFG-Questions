#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector< vector < ll > > arr;
vector< vector < ll > > dp;
vector< ll > res;

ll max_cost_path(ll i, ll j, ll n)
{
	if(i < n && i >= 0 && j < n && j >= 0)
	{
		if(dp[i][j]==-1)
		{	
			if(i==n-1 )
				dp[i][j]=arr[i][j];
			else 
				dp[i][j]=arr[i][j] + max(max_cost_path(i+1,j+1,n),max(max_cost_path(i+1,j-1,n),max_cost_path(i+1,j,n)));
		}
		return dp[i][j];
	}
	return 0;
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
		res.resize(n);
		ll r=0;
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


		for(i=0;i<n;i++)
		{
			max_cost_path(0,i,n);
			res[i]=dp[0][i];
			r=max(r,res[i]);
		}
		cout<<r<<endl;
		arr.clear();
		dp.clear();

	}
	return 0;
}