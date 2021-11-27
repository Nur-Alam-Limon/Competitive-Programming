#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(2,i);
    }
    printf("%lld\n",sum);
}
