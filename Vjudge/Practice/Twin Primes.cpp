#include<bits/stdc++.h>

using namespace std;

long long int a[20000005],b[1000005];
long long int mx=20000000,xy=0;

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
    for(int k=3;k<=n;k+=2)
    {
        if(a[k]==0 && a[k+2]==0) {b[xy]=k; xy++;}
        if(xy>=100000) break;
    }
}

int main()
{
    long long int m;
    prime(mx);
    while((scanf("%lld",&m))!=EOF)
    {
        printf("(%lld, %lld)\n",b[m-1],b[m-1]+2);
    }
    return 0;
}
