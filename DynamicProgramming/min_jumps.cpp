#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector< ll > dp;
vector< ll > arr;

ll min_jumps(ll i, ll n)
{
    if(i>=0 && i<n)
    {
        if(dp[i]==-1)
        {
            if(i==n-1)
            {
                dp[i]=0;
            }
            else
            {
                    ll j=arr[i],k;
                ll cal=INT_MAX;
                for(k=i+1;k<=i+j;k++)
                {
                    cal=min(cal,min_jumps(k,n));
                }
                if(cal!=INT_MAX)
                {
                    cal=cal+1;
                    dp[i]=cal;
                }
                else
                {
                    dp[i]=cal;
                }
            }
        }
        return dp[i];
    }
    return INT_MAX;
}

int main() {
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        arr.resize(n);
        dp.resize(n);
        fill(dp.begin(),dp.end(),-1);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        min_jumps(0,n);
        if(dp[0]!=INT_MAX)
            cout<<dp[0]<<endl;
       else
        cout<<"-1\n";
        arr.clear();
        dp.clear();
    }
    return 0;
}