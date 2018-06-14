// Segregate even and odd
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,k;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        ll j=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                ll temp=arr[i];
                for(k=i;k>j;k--)
                {
                    arr[k]=arr[k-1];
                }
                arr[j]=temp;
                j++;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
	return 0;
}