#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,f=0;
	    cin>>n>>x;
	    int i,arr[n],j,k,l;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for(i=0;i<n-3;i++)
	    {
	        for(j=i+1;j<n-2;j++)
	        {
	            for(k=j+1,l=n-1;k<l;)
	            {
	                if((arr[i]+arr[j]+arr[k]+arr[l])==x)
	                {
	                    cout<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<' '<<arr[l]<<" $";
	                    k++;l--;
	                    f=1;
	                }
	                else if((arr[i]+arr[j]+arr[k]+arr[l])<x)
	                k++;
	                else
	                l--;
	            }
	        }
	    }
	    if(f==0)
	    cout<<-1;
	    cout<<endl;
	}
	return 0;
}