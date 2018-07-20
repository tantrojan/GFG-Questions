#include<bits/stdc++.h>
using namespace std;


void selection_sort(int n,int a[])
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int m=a[i];
		int pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<m)
			{
				m=a[j];
				pos=j;
			}
		}
		swap(a[pos],a[i]);
	}	
}

int main(){
	
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	selection_sort(n,a);
	cout<<"Sorted :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}