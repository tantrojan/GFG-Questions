#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> seg;
vector<ll> arr;

void buildseg(ll i,ll l,ll r)
{
	if(l==r)
	{
		seg[i]=arr[l];
		return;
	}
	ll mid=l+(r-l)/2;
	buildseg(2*i,l,mid);
	buildseg(2*i+1,mid+1,r);
	seg[i]=__gcd(seg[2*i],seg[2*i+1]);
}

void updateseg(ll i,ll l,ll r,ll idx,ll val)
{
	if(l==r)
	{
		arr[idx]=val;
		seg[i]=arr[idx];
		return;
	}
	ll mid=l+(r-l)/2;
	if(idx<=mid && idx>=l)
	{
		updateseg(2*i,l,mid,idx,val);
	}
	else 
	{
		updateseg(2*i+1, mid+1, r, idx, val);
	}
	seg[i]=__gcd(seg[2*i],seg[2*i+1]);
}

ll queryseg(ll i,ll l,ll r,ll reql,ll reqr)
{
	if(l>reqr || r<reql)
	{
		return 0;
	}
	if(reql<=l && reqr>=r)
	{
		return seg[i];
	}
	ll mid = l + (r-l)/2;
	ll p1 = queryseg(2*i,l,mid,reql,reqr);
	ll p2 = queryseg(2*i+1,mid+1,r,reql,reqr);
	return __gcd(p1,p2);
}

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		ll i,n,q;
		cin>>n>>q;
		arr.resize(n);
		seg.resize(4*n+1);
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		buildseg(1,0,n-1);
		while(q--)
		{
			ll l,r;
			cin>>l>>r;
			l--,r--;
			cout<<__gcd(queryseg(1,0,n-1,0,l-1),queryseg(1,0,n-1,r+1,n-1))<<endl;

		}
	}
	return 0;
}