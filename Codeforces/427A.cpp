#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    int first=n*a+2*c;
    int second=n*b+2*d;
    if(first<second)
    {
        cout<<"First"<<endl;
    }
    else if(first>second)
    {
        cout<<"Second"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}