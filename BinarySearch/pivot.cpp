// Find the pivot point in a sorted rotated array
#include<bits/stdc++.h>
using namespace std;


int pivot_elem(int arr[],int l ,int r)
{
	int m;
	while(l<=r)
	{
		m=l+(r-l)/2;
		if(l==r)
		{
			return m+1;
		}
		else if(arr[m]<arr[r])
		{
			r=m;
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
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)cin>>arr[i];
	int res;
	res=pivot_elem(arr,0,n-1);
	cout<<res;
	return 0;
}