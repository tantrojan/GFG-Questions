#include<bits/stdc++.h>
using namespace std;
#define mod 1000003
typedef long long int ll;

ll fact[16]={0};

int main()
{
	ll t;
	cin>>t;
	string str;
	fact[0]=fact[1]=1;
	for(ll i=2;i<16;i++)
	{
		fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
		// cout<<fact[i];
	}
	// cout<<t;
	while(t--)
	{
		cin>>str;
		// cout<<str;
		int a[26]={0};
		ll l=str.length(),i,f=0,pos=0;
		for(i=0;i<l;i++)
		{
			a[str[i]-'a']++;
			// cout<<a[str[i]-'a']<<' ';
			if(a[str[i]-'a']>1)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			
			for(i=0;i<l;i++)
			{
				ll c=0;
				for(ll k=0;k<(str[i]-'a');k++)
				{	
					if(a[k]==1)
					c++;
				}
				a[str[i]-'a']=0;
				// cout<<fact[l-1-i];
				pos=((pos%mod)+((c%mod)*(fact[l-1-i]%mod))%mod)%mod;

			}
			pos+=1;
			cout<<pos<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}