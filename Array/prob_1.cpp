// Union and intersection of two arrays
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,m;
	cin>>n;
	ll a[n];
	ll i,j;
	for(i=0;i<n;i++)cin>>a[i];
	cin>>m;
	ll b[m];
	for(i=0;i<m;i++)cin>>b[i];
	vector< ll > uni,inter;
	uni.push_back(a[0]);
	i=0;j=0;
	ll prev=a[0];
	while(i<n && j<m)
	{
		if(prev!=a[i])
		{
			uni.push_back(a[i]);
			prev=a[i];
		}
		if(prev!=b[j])
		{
			uni.push_back(b[j]);
			prev=b[j];
		}
		if(a[i]==b[j])
		{
			inter.push_back(a[i]);
			i++;
			j++;
		}
		else if(a[i]>b[j])
		{
			j++;
		}
		else{
			i++;
		}
	} 
	while(i<n)
	{
		if(prev!=a[i])
		{
			uni.push_back(a[i]);
			prev=a[i];
		}i++;
	}
	while(j<m)
	{
		if(prev!=b[j])
		{
			uni.push_back(b[j]);
			prev=b[j];
		}j++;
	}
	cout<<"UNION :";
	for(i=0;i<uni.size();i++)cout<<uni[i]<<' ';
	cout<<endl;
	cout<<"INTERSECTION :";
	for(i=0;i<inter.size();i++)cout<<inter[i]<<' ';
	cout<<endl;
}