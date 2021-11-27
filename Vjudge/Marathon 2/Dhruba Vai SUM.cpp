#include<bits/stdc++.h>

using namespace std;

long long int a[100005];

int main()
{
    long long int n,q;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&q);
    for(int j=0;j<q;j++)
    {
        long long int x=0,y=0,sum=0;
        scanf("%lld %lld",&x,&y);
        for(int k=x;k<=y;k++)
        {
            sum=sum+a[k];
        }
        printf("%lld\n",sum);
    }
}
