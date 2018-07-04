#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,n;
	    cin>>n;
	    int a[n],msis[n],m=-1;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        msis[i]=a[i];
	        m=max(m,msis[i]);
	    }
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
	        {
	            if(a[i]>a[j] && msis[i]<msis[j]+a[i])
	            {
	                msis[i]=a[i]+msis[j];
	                m=max(m,msis[i]);
	            }
	        }
	    }
	    cout<<m<<endl;
	}
	return 0;
}