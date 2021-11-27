#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<ll,ll>>adj[100005];
vector<ll>ans;
ll vis[100005],dis[100005],parent[100005];

ll dijkstra(ll s,ll e)
{
    dis[s]=0;
    parent[s]=-1;
    priority_queue<pair<ll,ll>>pq;
    pq.push({0,s});
    while(!pq.empty())
    {
        pair<ll,ll>x;
        x=pq.top();
        pq.pop();
        ll y=x.second;
        if(vis[y]==1) continue;

        for(ll i=0;i<adj[y].size();i++)
        {
            ll a=adj[y][i].first;
            ll b=adj[y][i].second;
            if(dis[b]>dis[y]+a)
            {
                dis[b]=dis[y]+a;
                parent[b]=y;
                pq.push(make_pair(-dis[b],b));
            }
        }
        vis[y]=1;
        if(y==e) return dis[e];
    }
    return -1;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(c,b));
        adj[b].push_back(make_pair(c,a));
    }
    for(ll i=0;i<100003;i++)
    {
        vis[i]=0;
        dis[i]=1000000059000;
    }
    ll x=dijkstra(1,n);
    if(x==-1)
        cout<<x<<endl;
    else
    {
        ll u=n,v=1;
        while(u!=-1)
        {
            ans.push_back(u);
            u=parent[u];
        }
        for(ll i=ans.size()-1;i>=0;i--)
            cout<<ans[i]<<" ";

        cout<<endl;
    }
    return 0;
}
