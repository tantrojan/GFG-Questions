// first positive number 
#include <bits/stdc++.h>
using namespace std;

int segregate(int a[],int n)
{
    int j=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            swap(a[i],a[j]);
            j++;
        }
    }
    return j;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,f=0;
	    cin>>n;
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)cin>>a[i];
	    int start=segregate(a,n);
	    for(i=start;i<n;i++)
	    {
	        if(abs(a[i])>=1 && abs(a[i])<=(n-start))
	        {
	            a[abs(start+a[i]-1)]=-abs(a[start+a[i]-1]);
	        }
	    }
	    cout<<start<<' '<<a[start]<<endl;
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<' ';
	       // if(a[i]>0)
	       // {
	       //     f=1;
	       //     cout<<(i-start+1);
	       //     break;
	       // }
	    }
	    if(f==0)
	    cout<<n-start+1;
	    cout<<endl;

	}
	return 0;
}