#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> dp;

int rodcut(int i)
{
    if(i>=0)
    {
        if(dp[i]==-1)
        {
            int j;
            int m=0;
            for(j=0;j<=i;j++)
            {
                m=max(m,a[j]+rodcut(i-j-1));
            }
            dp[i]=m;
        }
        return dp[i];
    }
    return 0;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    a.resize(n);
	    dp.resize(n,-1);
	   // for(i=0;i<n;i++)
	   // {
	   //     dp[i].resize(n,-1);
	   // }
	    int i;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    rodcut(n-1);
	    cout<<dp[n-1]<<endl;
	    dp.clear();
	    a.clear();
	}
	return 0;
}