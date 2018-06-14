//String encode
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this function */
char *encode(char *src)
{     
    int l=strlen(src),i;
    string s="";
    for(i=0;i<l;)
    {
        char c=src[i];
        int co=1,f=0;
        while((i+1)<l && src[i+1]==c)
        {
            co++;
            i++;
            f=1;
        }
        s=s+c+to_string(co);
        i++;
    }
    s=s+'\0';
    char a[10000];
    for(int i=0;i<s.length();i++)
    {
        a[i]=s[i];
    }
    cout<<a<<endl;
    return a;
}  