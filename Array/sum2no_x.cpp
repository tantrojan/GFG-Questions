// Find two numbers whose sum is x
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n,flag=0;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    int i=0,j=n-1;
	    while(i<j)
	    {
	        if((arr[i]+arr[j])==x)
	        {
	            flag=1;
	            break;
	        }
	        else if((arr[i]+arr[j])>x)
	        {
	            j--;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    if(flag==0)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	}
	return 0;
}