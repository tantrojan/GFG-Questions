#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> dp;

void lis(int n)
{
    int m=1;
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i] && dp[i] < (dp[j] + 1))
            {
                dp[i]=dp[j]+1;
                m=max(m,dp[i]);
            }
        }
    }
    if(n==0)
    cout<<0<<endl;
    else
    cout<<m<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        cin>>n;
        a.resize(n);
        dp.resize(n,1);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lis(n);
        dp.clear();
        a.clear();
    }
	return 0;
}