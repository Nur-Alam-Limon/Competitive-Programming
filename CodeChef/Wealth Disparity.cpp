#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,ans=0,root=0;
    cin>>n;
    ll a[n+5],b[n+5],vis[n+5]={0},m[n+5]={0};
    vector<ll>adj[n+5];
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++) cin>>b[i];
    for(ll i=1;i<=n;i++)
    {
        if(b[i]==-1) {root=i; continue;}
        adj[b[i]].push_back(i);
    }
    queue<ll>q;
    q.push(root);
    vis[root]=1;
    m[root]=a[root];
    while(!q.empty())
    {
        ll node=q.front();
        q.pop();
        for(ll i=0;i<adj[node].size();i++)
        {
            ll x=adj[node][i];
            if(!vis[x])
            {
                q.push(x);
                vis[x]=1;
                ans=max(ans,m[node]-a[x]);
                m[x]=max(a[x],m[node]);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
