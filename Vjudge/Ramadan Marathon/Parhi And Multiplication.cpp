#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int n,sum=1,m=1000000007;
        scanf("%lld",&n);
        long long int ar[n];
        for(int j=0;j<n;j++)
        {
            scanf("%lld",&ar[j]);
            sum=((sum%m)*(ar[j]%m))%m;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
