// Find the 3 elements such that a[i] < a[j] < a[k] and i < j < k
#include<bits/stdc++.h>
using namespace std;

vector<int> find3Numbers(vector<int> A, int n)
{
   vector<int> res;
   vector<int> smallest(n,-1),largest(n,-1);
   int small=A[0],small_index=-1,large=A[n-1],large_index=-1;
   int i;
   for(i=0;i<n;i++)
   {
       if(A[i]>small)
       {
           smallest[i]=small_index;
       }
       else
       {
           small_index=i;
           small=A[i];
           smallest[i]=-1;
       }
   }
   for(i=n-1;i>=0;i--)
   {
       if(A[i]<large)
       {
           largest[i]=large_index;
       }
       else
       {
           large_index=i;
           large=A[i];
           largest[i]=-1;
       }
   }
   for(i=0;i<n;i++)
   {
       if(smallest[i]!=-1 && largest[i]!=-1)
       {
           res.push_back(A[smallest[i]]);
           res.push_back(A[i]);
           res.push_back(A[largest[i]]);
           break;
       }
   }
   	return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j;
		cin>>n;
		std::vector<int> a(n);
		for(i=0;i<n;i++)cin>>a[i];
		vector<int> res;
		res=find3Numbers(a,n);
		if(res.size()==3)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}