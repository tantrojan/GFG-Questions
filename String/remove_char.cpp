// Remove characters from first string which are present in the second string
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string s1,s2;
	while(t--)
	{
	    cin>>s1>>s2;
	    char a[26]={0};
	    int l=s2.length();
	    for(int i=0;i<l;i++)
	    {
	        a[s2[i]-'a']++;
	    }
	    l=s1.length();
	    string res="";
	    for(int i=0;i<l;i++)
	    {
	        if(a[s1[i]-'a']==0)
	        res=res+s1[i];
	    }
	    cout<<res<<endl;
	}
	return 0;
}