#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,i;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int global_max=-101;
	    int curr_max=-101;
	    for(i=0;i<n;i++)
	    {
	        curr_max=max(a[i],curr_max+a[i]);
	        global_max=max(curr_max,global_max);
	    }
	    cout<<global_max<<endl;
	}
	return 0;
}