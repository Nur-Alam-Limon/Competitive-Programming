#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[100000];
ll t=0;
ll v[1000000]={0};

void dfs(ll x,ll y)
{
    v[x]=1;

    for(ll i=0;i<adj[x].size();i++)
    {
        if(v[adj[x][i]]==0) {dfs(adj[x][i],x);}
        else if(adj[x][i]!=y) t=0;
    }
}

int main()
{
    ll a,b,x,y,cnt=0;
    cin>>a>>b;
    while(b--)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    x=0;
    for(ll i=1;i<=a;i++)
    {
        if(v[i]==0)
        {
            t=1;
            dfs(i,0);
            if(t==1) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
