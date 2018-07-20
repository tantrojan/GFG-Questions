#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,j;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int d;
	    cin>>d;
	    for(i=0,j=d-1;i<d/2;i++,j--)
	    {
	        swap(a[i],a[j]);
	    }
	    for(i=d,j=n-1;i<d+(n-d)/2;i++,j--)
	    {
	        swap(a[i],a[j]);
	    }
	    for(i=0,j=n-1;i<n/2;i++,j--)
	    {
	        swap(a[i],a[j]);
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<a[i]<<' ';
	    }
	    cout<<endl;
	}
	return 0;
}