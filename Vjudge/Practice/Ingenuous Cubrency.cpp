#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll coinchange(ll n,ll a[])
{
    ll dp[100000];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(ll i=1;i<=21;i++)
    {
        if(a[i]>n) break;
        for(ll j=a[i];j<=n;j++)
            dp[j]+=dp[j-a[i]];
    }
    return dp[n];
}

int main()
{
    ll n;
    ll a[25];
    for(ll i=1;i<=21;i++)
    {
        a[i]=pow(i,3)+0.5;
    }
    while(scanf("%lld",&n)!=EOF)
    {
        cout<<coinchange(n,a)<<endl;
    }
    return 0;
}
