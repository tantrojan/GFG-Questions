//atoi

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
int atoi(string str)
{
    int l=str.length();
    int res=0,f=0,sign=1,i=0;
    if(str[0]=='-')
    {
        sign=-1;
        i=1;
    }
    for(;i<l;i++)
    {

        if(str[i]>='0' && str[i]<='9')
        res=res*10+ str[i]-'0';
        else
        {
            return -1;
        }
    }
    // cout<<sign<<res;
    return res*sign;
}