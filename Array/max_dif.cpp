//Maximum difference sich that the larger number appears after the smaller one

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i;
        ll min=-1,maxdif=-1;
        for(i=0;i<n;i++)cin>>a[i];
        min=a[0];
        for(i=1;i<n;i++)
        {
            ll dif=a[i]-min;
            if(dif>maxdif)
            {
                maxdif=dif;
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        cout<<maxdif<<endl;
    }
	return 0;
}