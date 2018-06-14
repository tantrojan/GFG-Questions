#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    string str;
	    cin>>n>>str;
	    ll c[26]={0};
	    ll i;
	    for(i=0;i<n;i++)
	    {
	        c[str[i]-'a']++;
	    }
	    ll f=0;
	    for(i=0;i<26;i++)
	    {   
	        if(c[str[i]-'a']==1)
	        {
	            f=1;
	            break;
	        }
	    }
	    if(f==1)
	    cout<<str[i]<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}