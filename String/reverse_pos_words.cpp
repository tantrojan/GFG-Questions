//Reverse the order of the words in the String
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll n,i,l;
	cin>>n;
	string str;
	stack<string> st;
	while(n--)
	{
        cin>>str;
        str=str+'.';
        l=str.length();
        for(i=0;i<l;)
        {
            string a="";
            while(str[i]!='.')
            {
                a=a+str[i];
                i++;
            }
            if(str[i]=='.')
            {
                st.push(a);
                a.clear();
                i++;
            }
        }
        str.clear();
        while(!st.empty())
        {
            str=str+st.top();
            st.pop();
            if(st.size()!=0)
            {
                str=str+'.';
            }
        }
        cout<<str<<endl;
        
	}
	return 0;
}