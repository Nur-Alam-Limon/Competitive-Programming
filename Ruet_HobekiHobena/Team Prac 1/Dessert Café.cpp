#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[1000009];
ll good[1000009];

void dfs(ll a,ll b)
{
    for(ll i=0;i<adj[a].size();i++)
    {
        if(adj[a][i]==b) continue;
        dfs(adj[a][i],a);
        if(good[adj[a][i]]==1) good[a]=1;
    }
}

int main()
{
    ll n,k,a=0;
    cin>>n>>k;
    for(ll i=1;i<n;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(ll i=0;i<k;i++)
    {
        cin>>a;
        good[a]=1;
    }
    dfs(a,-1);
    ll cnt=0;
    for(ll i=1;i<=n;i++) cnt+=good[i];
    cout<<cnt<<endl;
    return 0;
}
