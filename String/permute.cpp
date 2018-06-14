#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<string> st;

void permute(ll l, ll r, string s)
{
    if(l==r)
        st.push_back(s);
    ll i;
    for(i=l;i<=r;i++)
    {
        swap(s[i],s[l]);
        permute(l+1,r,s);
        swap(s[i],s[l]);
    }
}


int main() {
	ll t;
	cin>>t;
	string str;
	while(t--)
	{
	    cin>>str;
	    ll l=str.length();
	    permute(0,l-1,str);
        sort(st.begin(),st.end());
        vector<string>::iterator it;
        for(it=st.begin();it!=st.end();it++)
        {
            cout<<(*it)<<' ';
        }
        st.clear();
        cout<<endl;
	}
	return 0;
}