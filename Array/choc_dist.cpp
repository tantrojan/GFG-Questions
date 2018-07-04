#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    cin>>k;
	    k--;
	    int m=a[n-1]-a[0];
	    for(i=0;i<n-k;i++)
	    {
	        m=min(m,a[i+k]-a[i]);
	    }
	    cout<<m<<endl;
	}
	return 0;
}