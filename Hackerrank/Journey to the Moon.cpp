#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll>adj[100005];
ll v[100005]={0};
ll c=0;

void dfs(ll w)
{
    v[w]=1;
    c++;

    for(ll i=0;i<adj[w].size();i++)
    {
        if(!v[adj[w][i]]) dfs(adj[w][i]);
    }
}

int main()
{
    ll n,m,cnt=0,ans=0,k=0,sum=0,cnt1=0;
    cin>>n>>m;
    ll f[100005];
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(ll i=0;i<n;i++)
    {
        if(!v[i])
        {
            c=0;
            dfs(i);
            cnt++;
            f[k]=c;
            k++;
            cnt1+=c;
        }
    }
    for(ll i=0;i<k;i++)
    {
        cnt1-=f[i];
        sum+=f[i]*cnt1;
    }
    cout<<sum<<endl;
    return 0;
}
