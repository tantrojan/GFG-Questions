//Find subarray with sum zero
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        ll prefix[n+1]={0};
        prefix[0]=0;
        map< ll , vector< ll > > hash;
        hash[prefix[0]].push_back(0);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            prefix[i+1]=prefix[i]+arr[i];
            hash[prefix[i+1]].push_back(i);
        }
        ll flag=0;
        map< ll , vector< ll > >::iterator it;
        for(it=hash.begin();it!=hash.end();it++)
        {
            if((*it).second.size()>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
	return 0;
}