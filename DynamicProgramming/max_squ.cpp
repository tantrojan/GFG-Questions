#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector < vector <ll> > arr;
vector < vector <ll> > dp;

ll max_sq(ll i ,ll j ,ll n ,ll m )
{
    if(i>=0 && i<n && j>=0 && j<m)
    {
        if(i==0 || j==0)
        {
            dp[i][j]=arr[i][j];
            return dp[i][j];
        }
        if(dp[i][j]==-1)
        {
            if(arr[i][j]==1)
            {
                dp[i][j] = min(max_sq(i-1,j,n,m),min(max_sq(i,j-1,n,m),max_sq(i-1,j-1,n,m)))+1;
            }
            else if(arr[i][j]==0)
            {
                dp[i][j] = 0;
            }
        }
        return dp[i][j];
    }
    return 0;
}

int main() {
	ll t,n,m,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    arr.resize(n);
	    dp.resize(n);
	    for(i=0;i<n;i++)
	    {
	        arr[i].resize(m);
	        dp[i].resize(m);
	        fill(dp[i].begin(),dp[i].end(),-1);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>arr[i][j];
	            cout<<arr[i][j]<<' ';
	        }
	        cout<<endl;
	    }
	    cout<<endl;
	    max_sq(n-1,m-1,n,m);
	    ll ma=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cout<<dp[i][j]<<' ';
	            ma=max(ma,dp[i][j]);
	        }
	        cout<<endl;
	    }
	    cout<<ma<<endl;
	    dp.clear();
	    arr.clear();
	}
	return 0;
}