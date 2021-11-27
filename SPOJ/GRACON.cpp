#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[10000007];
ll vis[10000007];

void dfs(ll n)
{
    vis[n]=1;

    for(ll i=0;i<adj[n].size();i++)
    {
        if(!vis[adj[n][i]]) dfs(adj[n][i]);
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,cnt=0;
        cin>>n>>m;
        for(ll i=0;i<n+5;i++)
        {
            vis[i]=0;
            adj[i].clear();
        }
        for(ll i=0;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(ll i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                cnt++;
                dfs(i);
            }
        }
        if(cnt==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
