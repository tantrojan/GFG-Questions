vector<vector<int> > Solution::generate(int A) {
    
    int n=A;
    vector<vector<int>> pas(n);
    int i,j;
    for(i=0;i<n;i++)
    {
        pas[i].resize(i+1);
        for(j=0;j<pas[i].size();j++)
        {
            if(j==0 || j==(pas[i].size()-1))
            pas[i][j]=1;
            else
            pas[i][j]=pas[i-1][j]+pas[i-1][j-1];
        }
    }
    return pas;
}
