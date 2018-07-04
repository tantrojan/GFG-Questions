// Find the longest common subsequence
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector< vector<ll> > dp;
string s1,s2;

ll LCS(ll i,ll j)
{
    if(i>=0 && j>=0)
    {
        if(dp[i][j]==-1)
        {
            if(s1[i]==s2[j])
            {
                
                    dp[i][j]=max(1+LCS(i-1,j-1),max(LCS(i-1,j),LCS(i,j-1)));
            }
            else
            {
                dp[i][j]=max(LCS(i-1,j),LCS(i,j-1));
            }
        }
        return dp[i][j];
    }
    else
        return 0;
    
}

int main() {
	ll t,n1,n2,i;
	cin>>t;
	while(t--)
	{
	    cin>>n1>>n2>>s1>>s2;
	    dp.resize(n1);
	    for(i=0;i<n1;i++)
        {
            dp[i].resize(n2);
            fill(dp[i].begin(),dp[i].end(),-1);
        }	    
        cout<<LCS(n1-1,n2-1)<<endl;
        dp.clear();
	}
	return 0;
}