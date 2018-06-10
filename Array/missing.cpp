// Find the missing number in an array of N-1 numbers comprising of distinct numbers between 1 to N

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,sum=0,i;
	cin>>n;
	std::vector<int> v(n);
	for(i=0;i<n;i++){cin>>v[i];sum+=v[i];}
	cout<<"Missing number :"<<((n+2)*(n+1))/2 - sum;
	return 0;
}