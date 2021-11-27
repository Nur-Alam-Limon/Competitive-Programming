#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll adj[10005][10005];
ll INF=1e8;

void floyd()
{
    for(ll i=0;i<=2000;i++)
        for(ll j=0;j<=2000;j++)
            for(ll k=0;k<=2000;k++)
            {
                if(adj[j][i]+adj[i][k]<adj[j][k]) adj[j][k]=adj[j][i]+adj[i][k];
            }
}

int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        adj[x].push_back(make_pair(z,y));
    }
    for(ll i=1;i<=n;i++) cout<<dijkstra(i,i)<<endl;
}



