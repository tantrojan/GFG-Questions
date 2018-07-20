#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int n,int a[])
{
	int i,j;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j+1]<a[j])
			{
				swap(a[j+1],a[j]);
			}
		}
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
	bubble_sort(n,a);
	cout<<"Sorted :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}