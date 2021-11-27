#include<bits/stdc++.h>

using namespace std;

long long int a[1000005],b[1000005];

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
    b[2]=1;
    long long int h=1;
    for(int i=3;i<=1000000;i++)
    {
        long long int d=0,sum=0;
        if(a[i]==0)
        {
            d=i;
            while(d!=0)
            {
                sum=sum+(d%10);
                d=d/10;
            }
            if(a[sum]==0) {h++; b[i]=h;}
            else {b[i]=h;}
        }
        else b[i]=h;
    }
}

int main()
{
    long long int m;
    scanf("%lld",&m);
    prime(1000000);
    while(m--)
    {
        long long int t1,t2,x=0;
        scanf("%lld %lld",&t1,&t2);
        x=b[t2]-b[t1-1];
        printf("%lld\n",x);
    }
    return 0;
}
