#include<bits/stdc++.h>

using namespace std;
long long int arr[100000];

int main()
{
    long long int n,q;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&q);
    for(int j=0;j<q;j++)
    {
        long long int a,b,sum=0;
        scanf("%lld %lld",&a,&b);
        for(int k=a;k<=b;k++)
        {
            sum=sum+arr[k];
        }
        printf("%lld\n",sum);
    }
}
