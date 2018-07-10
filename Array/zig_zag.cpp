#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    vector<int> a(n);
	    int t;
	    for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(i%2==0)
            {
                if(a[i]>a[i+1])
                {
                    swap(a[i],a[i+1]);
                }
            }
            else 
            {
                if(a[i]<a[i+1])
                {
                    swap(a[i],a[i+1]);
                }
            }
        }
        for(i=0;i<n;i++)cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}