#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<ll,ll>>adj[100005];
ll vis[100005];
ll dis[100005];

ll dijkstra(ll start,ll finish)
{
    dis[start]=0;
    priority_queue<pair<ll,ll>>pq;
    pq.push({0,start});
    while(!pq.empty())
    {
        pair<ll,ll>x;
        x=pq.top();
        pq.pop();
        ll y=x.second;

        if(vis[y]) continue;

        for(ll i=0;i<adj[y].size();i++)
        {
            ll p=adj[y][i].first;
            ll q=adj[y][i].second;
            if(dis[p]>dis[y]+q)
            {
                dis[p]=dis[y]+q;
                pq.push(make_pair(-dis[p],p));
            }
        }
        vis[y]=1;
        if(y==finish) return dis[finish];
    }
    return -1;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,ans=0;
        cin>>n>>m;
        for(ll i=0;i<100005;i++) {adj[i].clear(); vis[i]=0; dis[i]=INT_MAX;}
        while(m--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            adj[a].push_back(make_pair(b,c));
        }
        ll start,finish;
        cin>>start>>finish;
        ans=dijkstra(start,finish);
        if(ans==-1) cout<<"NO"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
