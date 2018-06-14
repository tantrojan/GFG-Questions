// Array which is largest compared to the elements in the right
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
	    for(i=0;i<n;i++)cin>>arr[i];
	    ll m=arr[n-1];
	    stack< ll > st;
	    st.push(arr[n-1]);
	    for(i=n-2;i>=0;i--)
	    {
	        m=max(m,arr[i]);
	        if(m==arr[i] && m!=st.top())
	            st.push(arr[i]);
	    }
	    while(!st.empty())
	    {
	        cout<<st.top()<<' ';
	        st.pop();
	    }
	    cout<<endl;
	}
	return 0;
}