#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll a[100005],b[100005];

int main()
{
    ll t,k=0;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,m,ans=0,sumb=0;
        scanf("%lld %lld",&n,&m);
        k++;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
            sumb+=b[i];
            ans+=a[sumb-1];
        }
        ans+=(sumb-m)*20;
        printf("Case %lld: %lld\n",k,ans);
    }
    return 0;
}
