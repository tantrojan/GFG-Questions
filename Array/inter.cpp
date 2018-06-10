// Union and intersection of two arrays
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin>>t;
    vector< ll > inter;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m;
        ll a[n],b[m];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<m;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        ll prev=0;
        i=0;j=0;
        while(i<n && j<m)
        {
             if(a[i]==b[j])
             {
                 if(prev!=a[i])
                 {
                     inter.push_back(a[i]);
                     prev=a[i];
                 }
                 i++;j++;
             }
             else if(a[i]>b[j])
             {  
                 j++;
             }
             else if(a[i]<b[j])
             {
                 i++;
             }
        }
        for(i=0;i<inter.size();i++)
        {
            cout<<inter[i]<<' ';
        }
        if(inter.size()==0)
        cout<<"Zero";
        cout<<endl;
        inter.clear();
    }
    return 0;
}