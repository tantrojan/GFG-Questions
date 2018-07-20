#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int n,int a[])
{

	int i,j;
	for(i=1;i<n;i++)
	{
		int temp=a[i];
		for(j=i-1;j>=0 && (a[j]>temp);j--)
		{
			a[j+1]=a[j];
		}
		j++;
		a[j]=temp;

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
	insertion_sort(n,a);
	cout<<"Sorted :";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
}