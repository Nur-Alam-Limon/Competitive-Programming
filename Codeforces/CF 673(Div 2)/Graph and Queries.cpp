#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[1000005];

int main()
{
    ll n,m,q;
    cin>>n>>m>>q;
    ll a[n+5];
    for(ll i=1;i<=n;i++) cin>>a[i];
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    return 0;
}

