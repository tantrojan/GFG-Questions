#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n,c;
    ll prev,x;
    cin>>n>>c;
    ll count=0;
    cin>>prev;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if((x-prev)<=c)
        {
            count++;
        }
        else
        {
            count=0;
        }
        prev=x;
    }
    cout<<count+1<<endl;
    return 0;
}