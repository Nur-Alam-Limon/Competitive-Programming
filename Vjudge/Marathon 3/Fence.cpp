#include<bits/stdc++.h>

using namespace std;

long long int arr[150000],ar[150000];

int main()
{
    long long int a,b,k=0,sum=0,p=0,x=0,mn=0,ans=0;
    scanf("%lld %lld",&a,&b);
    for(int i=0;i<a;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int j=0;j<b;j++)
    {
            sum=sum+arr[j];
    }
    ar[p]=sum;
    p=p+1;
    for(int k=b;k<a;k++)
    {
        sum=sum+arr[k]-arr[k-b];
        ar[p]=sum;
        p++;
    }
    mn=ar[0];
    for(x=1;x<p;x++)
    {
        if(ar[x]<mn) {mn=ar[x]; ans=x+1;}
    }
    if(ans!=0) printf("%lld\n",ans);
    else printf("1\n");
}
