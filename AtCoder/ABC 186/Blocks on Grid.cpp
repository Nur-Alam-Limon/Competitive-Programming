#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll r,c,mi=10000,ans=0;
    cin>>r>>c;
    ll a[r+5][c+5];
    for(ll i=0;i<r;i++)
        for(ll j=0;j<c;j++)
        {
            cin>>a[i][j];
            mi=min(mi,a[i][j]);
        }
    for(ll i=0;i<r;i++)
        for(ll j=0;j<c;j++)
        {
            ans+=a[i][j]-mi;
        }
    cout<<ans<<endl;
    return 0;
}

