#include <bits/stdc++.h>
using namespace std;

int b_search(int x, int y, int n)
{
    int l=0,h=INT_MAX;
    int m;
    while(l<=h)
    {
        m=l+(h-l)/2;
        int val_m=m/x+m/y;
        int val_m_1=(m-1)/x+(m-1)/y;
        if(val_m>=n && (m==0 || val_m_1<n))
        {
            return m;
        }
        else if(val_m<n)
        {
            l=m+1;
        }
        else if(val_m>=n)
        {
            h=m-1;
        }
    }
    return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,n;
	    cin>>x>>y>>n;
	    cout<<b_search(x,y,n)<<endl;
	}
	return 0;
}