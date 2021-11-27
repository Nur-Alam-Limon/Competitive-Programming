#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        ll dp[n+5][k+5];
        for(ll i=2;i<=n+1;i++) cin>>a[i];

        memset(dp,0,sizeof(dp));

        for(ll i=2;i<=n+1;i++)
            for(ll j=1;j<=k;j++)
            {
                if(j<a[i]) dp[i][j]=dp[i-1][j];
                else {dp[i][j]=max(dp[i-1][j],a[i]+dp[i-2][j-a[i]]);}
            }
        cout<<"Scenario #"<<i<<": "<<dp[n+1][k]<<endl;
    }
    return 0;
}
