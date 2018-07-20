#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int i;
	    stack<int> st;
	    int res[n]={0};
	    res[n-1]=-1;

	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    st.push(a[n-1]);
	    
	    for(i=n-2;i>=0;i--)
	    {
	        while(!st.empty() && st.top()>=a[i])
	        {
	            st.pop();
	        }
	        if(!st.empty())
	        {
	            res[i]=st.top();
	            st.push(a[i]);
	        }
	        else
	        {
	            res[i]=-1;
	            st.push(a[i]);
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        cout<<res[i]<<' ';
	    }
	    while(!st.empty())
	    st.pop();
	    cout<<endl;
	}
	return 0;
}