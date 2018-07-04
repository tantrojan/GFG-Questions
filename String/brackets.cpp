#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int i=0,l=s.length();
	    stack<char> st;
	    int flag=1;
	    st.push('#');
	    for(i=0;i<l;i++)
	    {
	        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
	        {
	            st.push(s[i]);
	        }
	        else if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') || (s[i]=='}' && st.top()=='{') )
	        {
	            st.pop();
	        }
	        else
	        {
	            flag=0;
	            break;
	        }
	    }
	    st.pop();
	    if(flag==1 && st.empty())
	    {
	        cout<<"balanced\n";
	    }
	    else
	    {
	        cout<<"not balanced\n";
	    }
	}
	return 0;
}