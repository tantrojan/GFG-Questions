#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> st;
	    vector<int> e;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    i=0;
	    while(i<n-1)
	    {
	        while(i<n-1 && a[i]>a[i+1])
	        {
	            i++;
	        }
	        if(i>=n-1)
	        break;
	        st.push_back(i);
	        while(i<n-1 && a[i]<a[i+1])
	        {
	            i++;
	        }
	        e.push_back(i);
	    }
	    auto it=st.begin();
	    auto it2=e.begin();
	    for(;it!=st.end();it++,it2++)
	    {
	        cout<<"("<<(*it)<<" "<<(*it2)<<") ";
	    }
	    if(st.empty())
	    {
	        cout<<"No Profit";
	    }
	    cout<<endl;
	    st.clear();
	    e.clear();
	}
	return 0;
}