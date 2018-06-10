//Find two repeating elements
#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    n=n+2;
	    int arr[n];
	    int c[n-1]={0};
	    int x,y;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        c[arr[i]]++;
	        if(c[arr[i]]==2)
	        {
	            cout<<arr[i]<<' ';
	        }
	    }
	    cout<<endl;

	}
	return 0;
}