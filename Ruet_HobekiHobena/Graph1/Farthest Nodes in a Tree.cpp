#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mx=30005,inf=1e18;
vector<pair<ll,ll>>adj[30005];
ll vis[30005],dis[30005],n=0;

ll dijkstra(ll s)
{
    for(ll i=0;i<mx;i++) {dis[i]=inf; vis[i]=0;}
    ll mx=-1,p;
    dis[s]=0;
    priority_queue<pair<ll,ll>>pq;
    pq.push({0,s});
    while(!pq.empty())
    {
        pair<ll,ll>w;
        w=pq.top();
        pq.pop();
        ll u=w.second;
        if(vis[u]) continue;
        for(ll j=0;j<adj[u].size();j++)
        {
            ll d=adj[u][j].first;
            ll node=adj[u][j].second;
            if(dis[node]>dis[u]+d)
            {
                dis[node]=dis[u]+d;
                pq.push(make_pair(-dis[node],node));
            }
        }
        vis[u]=1;
    }
    for(ll i=0;i<n;i++)
    {
        if(dis[i]>mx)
        {
            mx=dis[i];
            p=i;
        }
    }
    return p;
}

int main()
{
    ll t;
    scanf("%lld",&t);
    for(ll j=1;j<=t;j++)
    {
        ll x,y,z,ans=0;
        scanf("%lld",&n);
        for(ll i=0;i<=n;i++) adj[i].clear();
        for(ll i=1;i<n;i++)
        {
            scanf("%lld %lld %lld",&x,&y,&z);
            adj[x].push_back(make_pair(z,y));
            adj[y].push_back(make_pair(z,x));
        }
        ans=dijkstra(1);
        ans=dijkstra(ans);
        ans=dis[ans];
        printf("Case %lld: %lld\n",j,ans);
    }
    return 0;
}

