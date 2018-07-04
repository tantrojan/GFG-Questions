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
	    int c[3]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        c[a[i]]++;
	    }
        i=0;
        while(c[0]--)
        cout<<0<<' ';
        while(c[1]--)
        cout<<1<<' ';
        while(c[2]--)
        cout<<2<<' ';
        cout<<endl;
	}
	return 0;
}