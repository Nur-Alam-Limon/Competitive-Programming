#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0,q;
        cin>>n;
        ll w[n+5],p[n+5];
        for(ll i=1;i<=n;i++) {cin>>p[i]; cin>>w[i];}
        cin>>q;
        while(q--)
        {
            ll x;
            cin>>x;
            ll tab[n+5][x+5];
            for(ll i=0;i<=n+1;i++)
                for(ll j=0;j<=x+1;j++)
                {
                    tab[i][j]=0;
                }

            for(ll i=1;i<=n;i++)
                for(ll j=1;j<=x;j++)
                {
                    if(j<w[i]) {tab[i][j]=tab[i-1][j];}
                    else
                    {
                        tab[i][j]=max(tab[i-1][j], p[i]+tab[i-1][j-w[i]]);
                    }
                }

            ans+=tab[n][x];
        }
        cout<<ans<<endl;
    }
    return 0;
}
