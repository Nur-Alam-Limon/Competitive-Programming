#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void find_MST(ll cost[n][n])
{
    ll parent[n],key[n];
    bool visited[n];

    for(ll i=0;i<n;i++)
    {
        parent[i]=-1;
        key[i]=99999999;
        visited[i]=0;
    }

    key[0]
}

int main()
{
    ll n,m,x,y,z;
    cin>>n>>m;
    ll cost[n+5][n+5];
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        cost[x][y]=z;
    }
    find_MST(cost[n][n]);

    return 0;
}
