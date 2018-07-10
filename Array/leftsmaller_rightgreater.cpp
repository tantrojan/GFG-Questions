#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)cin>>a[i];
	    int bmi[n]={0};
	    int bma[n]={0};
	    bmi[0]=a[0];bma[0]=a[0];
	    for(i=1;i<n;i++)
	    {
	        
	        bmi[i]=bmi[i-1];
	        if(bmi[i]>a[i])
	        {
	            bmi[i]=a[i];
	        }
	        bma[i]=bma[i-1];
	        if(bma[i]<a[i])
	        {
	            bma[i]=a[i];
	        }
	    }

	    int emi[n]={0};
	    int ema[n]={0};
	    emi[n-1]=a[n-1];
	    ema[n-1]=a[n-1];
	    for(i=n-2;i>=0;i--)
	    {
	        emi[i]=emi[i+1];
	        if(emi[i]>a[i])
	        {
	            emi[i]=a[i];
	        }
	        ema[i]=ema[i+1];
	        if(ema[i]==0 || ema[i]<a[i])
	        {
	            ema[i]=a[i];
	        }
	    }
	    int flag=0;
	    for(i=1;i<n-1;i++)
	    {
	       // cout<<bmi[i]<<" "<<a[i]<<endl;
	        if(bmi[i]<=a[i] && bma[i]==a[i] && emi[i]==a[i] && ema[i]>=a[i])
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"-1\n";
	    }
	    else
	    {
	        cout<<a[i]<<endl;
	    }
	}
	return 0;
}