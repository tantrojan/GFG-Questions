//Find the length of the longest substring having no duplicate
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	int t;
	cin>>t;
	string s;
	int i,l,maxsize=0;
	map< char , pair< int , int > > m;
	while(t--)
	{
	    maxsize=0;
	    cin>>s;
	    l=s.length();
	    int size=0,start=0;
	    for(i=0;i<l;i++)
	    {
	        if(m[s[i]].first==0)
	            m[s[i]].second=i;
	        m[s[i]].first++;
	        //  If the character has occurred before
	        if(m[s[i]].first>1)
	        {
	            // If the character is present in the subsequence
	            if(m[s[i]].second>=start)
	            {
	                if(size>maxsize)
	                    maxsize=size;
	                size=i-m[s[i]].second;
	                start=m[s[i]].second+1;
	            }
	            else
	            {
	                size++;
	            }
	            m[s[i]].second=i;
	        }
	        else
	        {
	            size++;
	        }
	        
	    }
	    cout<<max(size,maxsize)<<endl;
	    m.clear();
	}
	return 0;
}