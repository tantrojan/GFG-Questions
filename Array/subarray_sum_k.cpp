#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,n,k;
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int sum=0,flag=0;
	    for(i=0,j=0;j<=n && i<=j;)
	    {
	        if(sum<k)
	        {
	            sum=sum+a[j]; 
	            j++;
	        }
	        else if(sum>k)
	        {
	            sum=sum-a[i];
	            i++;
	        }
	        else if(k==sum)
	        {
	            cout<<i+1<<' '<<j<<endl;
	            flag=1;
	            break;
	        }
	       // cout<<sum<<' ';
	    }
	    if(flag==0)
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}