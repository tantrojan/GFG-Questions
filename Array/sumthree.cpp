#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,f=0;
	    cin>>n>>x;
	    int i,j,k;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    for(i=n-1;i>1;i--)
	    {
	        for(j=0,k=i-1;j<k;)
	        {
	            if((a[i]+a[j]+a[k])<x)
	            j++;
	            else if((a[i]+a[j]+a[k])>x)
	            k--;
	            else
	            {
	                f=1;
	                break;
	            }
	        }
	    }
	    if(f==1)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}