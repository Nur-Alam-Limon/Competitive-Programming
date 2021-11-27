#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[100000];
ll vis[100000];

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
    ll n,q,x=0,y=0;
    cin>>n>>q;
    for(ll i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    while(q--)
    {
        cin>>x>>y;
        dfs(x-1);
    }
    return 0;
}



