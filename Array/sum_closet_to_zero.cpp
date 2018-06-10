//Find two numbers whose sum is closet to zero
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,j,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        ll min_l=0,min_r=n-1;
        ll sum,min_sum=INT_MAX;
        for(i=0,j=n-1;i<j;)
        {
            sum=arr[i]+arr[j];
            if(abs(sum)<abs(min_sum))
            {
                min_sum=sum;
                min_l=i;
                min_r=j;
            }
            if(sum<0)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        cout<<arr[min_l]<<' '<<arr[min_r]<<endl;
    }
	return 0;
}