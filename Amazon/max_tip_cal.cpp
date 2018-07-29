#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> b;
vector< vector< vector<int> > > dp;
int n;

int tip(int i,int x,int y)
{
    if(x==0 && y==0)
    return 0;
    if(i<n)
    {
        if(dp[i][x][y]==-1)
        {
            int m1=0,m2=0;
            if(x!=0)
            {
                m1=a[i]+tip(i+1,x-1,y);
            }
            if(y!=0)
            {
                m2=b[i]+tip(i+1,x,y-1);
            }
            dp[i][x][y]=max(m1,m2);
        }
        return dp[i][x][y];
    }
    return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>n>>x>>y;
	    a.resize(n);
	    b.resize(n);
	    dp.resize(n);
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	        dp[i].resize(x+1);
	        for(j=0;j<=x;j++)
	        {
	            dp[i][j].resize(y+1,-1);
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)cin>>b[i];
	    cout<<tip(0,x,y)<<endl;
	    dp.clear();
	}
	return 0;
}