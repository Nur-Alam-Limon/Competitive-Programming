#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        ll a;
        cin>>a;
        ll ar[a+5],dp[1205],vis[25][1205];
        memset(dp,0,sizeof(dp));
        memset(vis,0,sizeof(vis));
        for(ll i=1;i<=a;i++) cin>>ar[i];
        for(ll i=a;i>=1;i--)
            for(ll j=n;j>=ar[i];j--)
            {
                if(dp[j]<ar[i]+dp[j-ar[i]]){
                dp[j]=ar[i]+dp[j-ar[i]];
                vis[i][j]=1;}
            }
        ll j=n;
        for(ll i=1;i<=a;i++)
        {
            if(vis[i][j])
            {
                cout<<ar[i]<<" ";
                j-=ar[i];
            }
        }
        cout<<"sum:"<<dp[n]<<endl;
    }
    return 0;
}
