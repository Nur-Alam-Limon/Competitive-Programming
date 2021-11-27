#include<bits/stdc++.h>

using namespace std;

char a[1000009];

void prime(int n)
{
    a[0]=1; a[1]=1;
    for(int i=4;i<=n;i+=2)
    {
        a[i]=1;
    }
    for(int j=3;j*j<=n;j+=2)
    {
        if(a[j]==0)
            for(int k=j*j;k<=n;k=k+j*2)
        {
            a[k]=1;
        }
    }
}

int main()
{
    long long int m=2;
    prime(1000000);
    while(m!=0)
    {
        long long int c=0,d=0;
        cin>>m;
        if(m==0) break;
        for(int k=3;k<=m/2;k++)
        {
            if(a[k]==0 && a[m-k]==0)
             {
                 d=k;
                 c=1;
                 break;
             }
        }
        if(c==1) cout<<m<<" "<<"="<<" "<<d<<" "<<"+"<<" "<<m-d<<endl;
        else cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
