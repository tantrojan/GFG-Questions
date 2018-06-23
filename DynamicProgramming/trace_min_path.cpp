#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector< vector <ll> > arr;
vector< vector <ll> > dp;

ll min_cost_path(ll i,ll j,ll n)
{
	if(i>=0 && i<n && j>=0 && j<n)
	{
		if(dp[i][j]==-1)
		{
			dp[i][j]=arr[i][j]+min(min_cost_path(i+1,j,n),min(min_cost_path(i+1,j+1,n),min_cost_path(i,j+1,n)));
		}
		return dp[i][j];
	}
	return INT_MAX;
}

void trace_min_path(ll i,ll j,ll n)
{
	cout<<arr[i][j]<<' ';
	ll val = dp[i][j]-arr[i][j];
	if(i+1 < n && j+1 < n)
	{
		if(val==dp[i+1][j+1])
			trace_min_path(i+1,j+1,n);
		else if(val==dp[i+1][j])
			trace_min_path(i+1,j,n);
		else
			trace_min_path(i,j,n);
	}
	else if(i+1 < n && j+1 >=n )
	{
		if(val==dp[i+1][j+1])
			trace_min_path(i+1,j+1,n);
		else if(val==dp[i+1][j])
			trace_min_path(i+1,j,n);
	}
	else if( i+1 >=n && j+1 <n)
	{
		if(val==dp[i][j+1])
			trace_min_path(i,j+1,n);
	}

}

int main()
{
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
			dp[i].resize(n);
			arr[i].resize(n);
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
		trace_min_path(0,0,n);
		cout<<endl;
		dp.clear();
		arr.clear();
	}
	return 0;
}