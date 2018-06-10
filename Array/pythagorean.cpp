#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,j,k;
	    int n,f=0;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    for(i=n-1;i>1;i--)
	    {
	        for(j=0,k=i-1;j<k;)
	        {
	            if((pow(arr[j],2)+pow(arr[k],2))==pow(arr[i],2))
    	        {
    	            f=1;
    	            break;
    	        }
    	        else if((pow(arr[j],2)+pow(arr[k],2))<pow(arr[i],2))
    	        j++;
    	        else
    	        k--;
	        }
	    }
	    if(f==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}