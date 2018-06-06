// Returns the index of first occurence of the element if present else returns -1

#include<bits/stdc++.h>
using namespace std;


int first_occur(int arr[], int l, int r, int key)
{
	int m;
	while(l<=r)
	{
		m=l+(r-l)/2;
		if(arr[m]==key && ( m==0 || arr[m-1]<key))
		{
			return m+1;
		}
		else if(arr[m]>=key)
		{
			r=m-1;
		}
		else
		{
			l=m+1;
		}
	}
	return -1;
}

int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	int key;
	cin>>key;
	sort(arr,arr+n);
	int res=first_occur(arr,0,n-1,key);
	cout<<res;
	// res=Floor(arr,0,n-1,key);
	// cout<<endl<<res;
	return 0;
}