// smallest and second smallest 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,n;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        ll small=arr[0];
        ll sec_small=INT_MAX;
        for(i=1;i<n;i++)
        {
            if(small>arr[i])
            {
                sec_small=small; 
                small=arr[i];
            }
            if(arr[i]<sec_small && arr[i]>small)
            {
                sec_small=arr[i];
            }
        }
        if(small==sec_small || sec_small==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<small<<' '<<sec_small<<endl;
        }
    }
	return 0;
}