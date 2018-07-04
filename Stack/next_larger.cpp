#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++)cin>>a[i];
	    int res[n]={0};
	    stack<int> st;
	    st.push(a[n-1]);
	    for(i=n-1;i>=0;i--)
	    {
	        while(!st.empty() && st.top()<=a[i])
	        {
	            st.pop();
	        }
	        if(st.empty())
	        {
	            res[i]=-1;
	            st.push(a[i]);
	        }
	        else
	        {
	            res[i]=st.top();
	            st.push(a[i]);
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<res[i]<<' ';
	    }
	    cout<<endl;
	   // st.clear();
	}
	return 0;
}