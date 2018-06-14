// Check if teo string are anagram or not
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    int a1[26]={0};
	    int a2[26]={0};
	    cin>>s1>>s2;
	    int l1=s1.length();
	    int i,l2=s2.length();
	    for(i=0;i<l1;i++)
	    {
	        a1[s1[i]-'a']++;
	    }
	    for(i=0;i<l2;i++)
	    {
	        a2[s2[i]-'a']++;
	    }
	    int flag=0;
	    for(i=0;i<26;i++)
	    {
	        if(a1[i]!=a2[i])
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}