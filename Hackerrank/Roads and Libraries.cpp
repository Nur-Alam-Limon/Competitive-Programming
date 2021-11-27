#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[100009];
ll vis[100009]={0};
ll cnt=0;

void dfs(ll p)
{
    vis[p]=1;
    cnt++;

    for(ll i=0;i<adj[p].size();i++)
    {
        if(!vis[adj[p][i]]) {dfs(adj[p][i]);}
    }
}

int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,m,cr,cl,ans=0;
        cin>>n>>m>>cl>>cr;
        for(ll i=0;i<=n;i++)
        {
            vis[i]=0;
            adj[i].clear();
        }
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(ll i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                cnt=0;
                dfs(i);
                ans+=cl;
                ans+=(cnt-1)*cr;
            }
        }
        ans=min(ans,n*cl);
        cout<<ans<<endl;
    }
    return 0;
}
