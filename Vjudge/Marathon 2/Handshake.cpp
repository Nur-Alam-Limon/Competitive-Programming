#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        long long int n,ans=0;
        scanf("%lld",&n);
        ans=(n*(n-1))/2;
        printf("%lld\n",ans);
    }
}
