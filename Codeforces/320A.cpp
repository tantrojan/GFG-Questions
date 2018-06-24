#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int count=0,i;
	int no_of_digits=log2(n)+1;
	for(i=0;i<no_of_digits;i++)
	{
		if(((1<<i)&(n))==(1<<i))
			count++;
	}
	cout<<count<<endl;
	return 0;
}