#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool prime[10000007];
vector<ll>adj[1000006];
ll cnt=0;

void seive()
{
    memset(prime,0,sizeof(prime));
    prime[0]=prime[1]=1;
    for(ll i=4;i<=1000000;i+=2) prime[i]=1;
    for(ll i=3;i*i<=1000000;i+=2)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<=1000000;j+=2*i) {prime[j]=1;}
        }
    }
}

void dfs(ll n)
{
    if(!prime[adj[n][0]]) cnt++;
    for(ll i=1;i<adj[n].size();i++)
    {
        ll p=adj[n][i];
        if(!prime[adj[p][0]]) cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    ll t;
    cin>>t;
    seive();
    while(t--)
    {
        ll n,q,x,y,z;
        cin>>n>>q;
        for(ll i=0;i<n+5;i++) adj[i].clear();
        for(ll i=1;i<=n;i++) {cin>>x; adj[i].push_back(x);}
        for(ll i=1;i<n;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        while(q--)
        {
            cin>>x;
            if(x==1)
            {
                cin>>y>>z;
                adj[y][0]=z;
            }
            if(x==2)
            {
                cin>>y;
                cnt=0;
                dfs(y);
            }
        }
    }
    return 0;
}
