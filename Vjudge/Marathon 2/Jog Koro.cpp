#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,ar[1005],sum=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(int j=0;j<n;j++)
    {
        sum=sum+ar[j];
    }
    printf("%lld\n",sum);
}
