#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<ll,ll>>adj[1000005];
ll vis[1000005];
ll dis[1000005];

ll dijkstra(ll p,ll q)
{
    dis[p]=0;
    priority_queue<pair<ll,ll>>pq;
    pq.push({0,p});
    while(!pq.empty())
    {
        pair<ll,ll> w;
        w=pq.top();
        pq.pop();
        ll u=w.second;

        if(vis[u]==1) continue;

        for(ll i=0;i<adj[u].size();i++)
        {
            ll c=adj[u][i].first;
            ll cit=adj[u][i].second;
            if(dis[cit]>dis[u]+c)
            {
                dis[cit]=dis[u]+c;
                pq.push(make_pair(-dis[cit],cit));
            }
        }
        vis[u]=1;
        if(u==q) return dis[q];
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0;i<1000005;i++) {adj[i].clear();}
        map<string,ll>index;
        for(ll i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            index[s]=i;
            ll con;
            cin>>con;
            while(con--)
            {
                ll city,cost;
                cin>>city>>cost;
                adj[i].push_back(make_pair(cost,city));
            }
        }
        ll query;
        cin>>query;
        while(query--)
        {
            for(ll i=0;i<100005;i++)
            {
                dis[i]=INT_MAX;
                vis[i]=0;
            }
            ll start=0,finish=0;
            string s;
            cin>>s;
            start=index[s];
            cin>>s;
            finish=index[s];
            cout<<dijkstra(start, finish)<<endl;;
        }
    }
    return 0;
}
