#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int left_max[n]={0},right_max[n]={0};
	    left_max[0]=a[0];
	    right_max[n-1]=a[n-1];
	    for(i=1;i<n;i++)
	    {
	        left_max[i]=max(a[i],left_max[i-1]);
	    }
	    for(i=n-2;i>=0;i--)
	    {
	        right_max[i]=max(a[i],right_max[i+1]);
	    }
	    int sum=0;
	    for(i=0;i<n;i++)
	    {
	       // cout<<"("<<left_max[i]<<","<<right_max[i]<<") ";
	        if(min(left_max[i],right_max[i])>a[i])
	        sum=sum+min(left_max[i],right_max[i])-a[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}