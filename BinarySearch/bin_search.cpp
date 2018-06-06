#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll binarySearch(vector< ll > a , ll n, ll key)
{
    ll i;
    ll l=0,h=n-1,m;
    while(l<=h)
    {
        m= l + (h-l)/2;
        if(a[m]==key)
        {
            return m;
        }
        else if(a[m]<key)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    return -1;
}

int main()
{
    ll n;
    cin>>n;
    std::vector<ll> a(n);
    ll i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll key;
    cin>>key;
    ll pos=binarySearch(a,n,key);
    if(pos==-1)
    {
        cout<<"NOT FOUND\n";
    }
    else
    {
        cout<<"FOUND\n";
    }
    return 0;
}