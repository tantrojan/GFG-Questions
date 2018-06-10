// Union of two arrays
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    vector< ll > uni;
    while(t--)
    {
        ll n,m,i,j;
    	cin>>n>>m;
    	ll a[n],b[m];
    	for(i=0;i<n;i++)cin>>a[i];
    	for(i=0;i<m;i++)cin>>b[i];
    	sort(a,a+n);
    	sort(b,b+m);
    	uni.push_back(min(a[0],b[0]));
    	ll prev=min(a[0],b[0]);
    	i=0;j=0;
    	while(i<n && j<m)
    	{
        	 if(a[i]==b[j])
        	 {
        	     if(prev!=a[i])
        	     {
        	         uni.push_back(a[i]);
        	         prev=a[i];
        	     }
        	     i++;j++;
        	 }
        	 else if(a[i]>b[j])
        	 {  
        	     if(prev!=b[j])
        	     {
        	         uni.push_back(b[j]);
        	         prev=b[j];
        	     }
        	     j++;
        	 }
        	 else if(a[i]<b[j])
        	 {
        	     if(prev!=a[i])
        	     {
        	         uni.push_back(a[i]);
        	         prev=a[i];
        	     }
        	     i++;
        	 }
    	}
    	while(j<m)
    	{
    	    if(prev!=b[j])
    	    {
    	        uni.push_back(b[j]);
    	        prev=b[j];
    	    }
    	    j++;
    	}
    	while(i<n)
    	{
    	    if(prev!=a[i])
    	    {
    	        uni.push_back(a[i]);
    	        prev=a[i];
    	    }
    	    i++;
    	}
    	for(i=0;i<uni.size();i++)
    	{
    	    cout<<uni[i]<<' ';
    	}
    	cout<<endl;
    	uni.clear();
    }
    return 0;
}