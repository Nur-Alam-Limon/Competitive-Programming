#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t=1;
    while(1)
    {
        ll l1,l2;
        cin>>l1>>l2;
        if(l1==0 && l2==0) break;
        ll a[l1+5],b[l2+5],dp[l1+5][l2+5];
        for(ll i=0;i<l1;i++) cin>>a[i];
        for(ll i=0;i<l2;i++) cin>>b[i];
        memset(dp,0,sizeof(dp));

        for(ll i=1;i<=l1;i++)
            for(ll j=1;j<=l2;j++)
        {
            if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        cout<<"Twin Towers #"<<t<<endl;
        cout<<"Number of Tiles : "<<dp[l1][l2]<<endl;
        cout<<endl;
        t++;
    }
    return 0;
}
