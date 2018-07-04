#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int j,i,k,l=s.length();
	    for(i=0;i<l;)
	    {
	        j=i;
	        
	        while(i<l && s[i]!='.') 
	        {
	            i++;
	        }
	        // cout<<j<<':'<<i<<' ';
	        for(k=j;k<((j+i)/2);k++)
	        {
	        	// cout<<s[k]<<':'<<s[i-j+k-1]<<' ';
	            swap(s[k],s[i+j-k-1]);
	        }
	        i++;
	    }
	    // cout<<s<<endl;
	    for(i=0;i<l/2;i++)
	    {
	    	swap(s[i],s[l-i-1]);
	    }
	    cout<<s<<endl;
	}
	return 0;
}