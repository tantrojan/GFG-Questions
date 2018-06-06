// Return the frequency of the key in a given file 

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

int freq(int arr[], int l, int r, int key)
{
	int fi,la;
	fi=first_occur(arr,l,r,key);
	la=last_occur(arr,l,r,key);
	if(fi==-1 || la==-1)
		return 0;
	return (la-fi+1); 
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
	int res=freq(arr,0,n-1,key);
	cout<<res;
	return 0;
}