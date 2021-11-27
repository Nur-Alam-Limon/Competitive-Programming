#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> adj[10006];
ll vis[10005];

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
    for(ll i=1;i<=t;i++)
    {
        ll n,x,y,cnt=0;
        string a,b;
        cin>>a;
        n=a[0]-65;
        for(ll i=0;i<n+5;i++)
        {
            vis[i]=0;
            adj[i].clear();
        }
        getline(cin,b);
        while(getline(cin,b))
        {
            if(b.size()==0) break;
            x=b[0]-65;
            y=b[1]-65;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(ll i=0;i<=n;i++)
        {
            if(vis[i]==0)
            {
                cnt++;
                dfs(i);
            }
        }
        cout<<cnt<<endl;
        if(i!=t) cout<<endl;
    }
    return 0;
}
