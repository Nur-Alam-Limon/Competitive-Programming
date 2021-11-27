#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<ll,ll>>adj[3005];
ll vis[3005]={0};

ll prim()
{
    priority_queue<pair<ll,ll>> p;
    ll cost=0;

    p.push(make_pair(0,0));
    while(!p.empty())
    {
        pair<ll,ll>temp=p.top();
        p.pop();
        ll v=temp.second;
        if(!vis[v])
        {
            vis[v]=1;
            cost+= -temp.first;
            for(ll i=0;i<adj[v].size();i++)
            {
                if(!vis[adj[v][i].first]) p.push(make_pair(-(adj[v][i].second),adj[v][i].first));
            }
        }
    }
    return cost;
}

int main()
{
    ll n,m,x,y,z,start;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        adj[x].push_back(make_pair(z,y));
        adj[y].push_back(make_pair(z,x));
    }
    cin>>start;
    cout<<prim()<<endl;

    return 0;
}

