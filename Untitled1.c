int N;
    cin>>N;
    int BN[32];
    int i;
    for(i=0; N>0;i++)
    {
        BN[i]=N%2;
        N=N/2;
    }
     for(int j=i-1; j>=0;j--)
    {
        cout<<BN[j];
    }
