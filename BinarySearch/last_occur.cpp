// Returns the index of the last occurrence of a number if present else returns -1
// author : tantrojan

#include<bits/stdc++.h>
using namespace std;

int last_occur(int arr[],int l ,int r, int key)
{
	int mid;
	int end=r;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(arr[mid]==key && (mid==end-1 || arr[mid+1]>key)){
			return mid+1;
		}
		else if(arr[mid]<=key)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int i,arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	int key;
	cin>>key;
	int res=last_occur(arr,0,n-1,key);
	cout<<res;
	return 0;
}
